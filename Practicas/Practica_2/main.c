#include <stdio.h>
#include <string.h>
#include "operations.h"
#define MAX_STRING_LENG 100
#define LANG "ENG"

typedef struct {
    char *operationName;
    int(operation *) (int, int);
} operation;

int main(int argc, char const *argv[]) {
  char operation[MAX_STRING_LENG];
  int operatorOne, operatorTwo;operatorOne, operatorTwo;

  char *lang;
  char **messages;

  if(strcmp(LANG, "ENG")){
    messages = message_ENG;
  } else if(strcmp(lang, "ESP")){
    messages = message_ESP;
  }
  printf("What is the operation?\n");
  scanf("%s\n", operation);
  scanf("%d %d\n", &operatorOne, &operatorTwo);

  if(!strcmp(operation, "add")){
    printf("result %d\n", add(operatorOne, operatorTwo));
  } else if(!strcmp(operation, "substract")){
    printf("result %d\n", substract(operatorOne, operatorTwo));
  }
  return 0;
}
