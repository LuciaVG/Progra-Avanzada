#include <stdlib.h>
#include <stdio.h>
#include "infographic.h"


int main(int argc, char **argv) {
  int c;
  FILE *file;
  file = fopen("test.txt", "r");
  if (file) {
      while ((c = getc(file)) != EOF)
          putchar(c);
      fclose(file);
  }
  
  printf("Hello from main\n");
  return 0;
}
