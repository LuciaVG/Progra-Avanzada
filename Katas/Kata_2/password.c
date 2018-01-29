#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int change(int may, int min, int num){
  int changes = 0;
  if(may == 0){
    changes ++;
  }
  if (min == 0) {
    changes++;
  }
  if (num == 0) {
    changes++;
  }

  return changes;
}

int big(int a, int b, int c){
  if(a >= b){
    if(a >= c){
      return a;
    } else {
      return c;
    }
  } else {
    if(c >= b){
      return c;
    } else {
      return b;
    }
  }
}

int strongPasswordChecker(char* s) {
  int len = strlen(s);
  int may = 0;
  int min = 0;
  int num = 0;
  int frst = 1;
  int scnd = 1;
  int same = 0;
  int chars = 0;

  int changes = 0;
  int changes2 = 0;
  int changes3 = 0;
  int rep = 0;

  for(int i = 0; i < len; i++){
    if(i>0 && s[i-1] != s[i]){
      chars ++;
    }
    scnd = (int)s[i];

    if(scnd >= 48 && scnd <= 57){
      num++;
    }
    if(scnd >= 65 && scnd <= 90){
      may++;
    }
    if(scnd >= 97 && scnd <= 122){
      min++;
    }
    if(i < 20){
      if(scnd == frst){

        same++;
      } else {
        same = 0;
      }
      if (same > 1) {
        same = 0;
        changes++;
        frst = 0;
      } else {
        frst = scnd;
      }
    }
  }

  changes2 = change(may, min, num);


  if(len >= 6){
    if(len <= 20){
      return big(changes, changes2, changes3);
    } else {
      changes3 = len -20;
      if(changes > 0){


      if (changes3 > chars){
        rep = changes3 - chars;
        return big(changes, changes2, 0) + rep;
      } else {
        rep = changes3;
        return big(changes, changes2, changes3);
      }


    } else {
      return changes2 + changes3;
    }
    }
  } else {
    changes3 = 6 - len;

    return big(changes, changes2, changes3);
  }
}

int main(int argc, char const *argv[]) {
  printf("%d\n", strongPasswordChecker("1010101010aaaB10101010"));
  return 0;
}
