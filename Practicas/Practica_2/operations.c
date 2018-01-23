#include <assert.h>
#include "operations.h"
#include <stdio.h>

#define MAX_INT 2147483647

int add(int a, int b){

  long c = (long)a + b;
  assert(c >= MAX_INT || c<= -MAX_INT);
  return a + b;
}

int substraction(int a, int b){

  long c = (long)a-b;
  assert(c >= MAX_INT || c<= -MAX_INT);
  return a - b;

}
