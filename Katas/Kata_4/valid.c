#include <stdio.h>
#include <stdlib.h>

int isNumber(char* s) {

  int hasNum = 0;
  int hasE = 0;
  int hasSign = 0;
  int hasComma = 0;
  int hasSpace = 0;
  int isFloat = 0;
  int noMore = 0;

  for(int i = 0; s[i] != '\0'; i++){
    int current = (int)s[i];
    int next = (int)s[i+1];

    if(current >= 48 && current <= 57 ){
      hasNum = 1;
      if(hasSpace || noMore){
        return 0;
      }
      continue;
    }

    switch (s[i]) {
      case 'e':
        if(hasE || !hasNum){
          return 0;
        }
        if(s[i+1] == ' ' || s[i+1] == '\0'){
          return 0;
        }
        hasE = 1;
        hasNum = 0;
        hasSign = 0;
      break;
      case '+':
        if(hasNum || (hasSign)){
          return 0;
        }
        hasSign = 1;
      break;
      case '-':
        if(hasNum || hasSign){
          return 0;
        }
        hasSign = 1;
      break;
      case ',':
        if(hasComma && s[i-4] != ',' || !hasNum){
          return 0;
        }
        hasComma = 1;
      break;
      case ' ':
        if(hasNum){
          if(hasSpace){
            if(s[i-1] != ' '){
              return 0;
            }
          } else {
            hasSpace = 1;
          }
        } else {
          if(hasComma || hasSign){
            return 0;
          }
        }
      break;
      case '.':
        if(isFloat || (hasNum && hasSpace) || hasE){
          return 0;
        }
        if((next < 48 || next > 57) &&  s[i+1]!='e'){
          noMore = 1;
        }
        isFloat = 1;
      break;
      default:
        return 0;
    }
  }

  if(hasNum){
    return 1;
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  printf("%d\n", isNumber(" 005047e+6"));
  return 0;
}
