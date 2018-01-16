#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a = 4;
  int j;
  float f = 7.5;
  int max = 2147483647;
  long int d;
  int b = a + f;
  float c = a*f;

  int arreglo[5] = {0,2};

  int *p;
  p = &a;
  *p = 7;
  p++;
  *p=8;
  d = (long)max * max;

  *(arreglo + 1) = 250;

  printf("p = %p, a = %d, j = %d,b = %d, d = %ld\n", p, a, j, b, d);
  printf("f = %f, c = %f, arreglo[1] = %d\n", f, c, arreglo[1]);

  p = arreglo;
  for(int k = 0; k<5; k++){
    *p++ += 67;
  }

  for(int k = 0; k< sizeof(arreglo)/sizeof(arreglo[0]); k++){
    printf("%d\n", arreglo[k]);;
  }
  return 0;
}
