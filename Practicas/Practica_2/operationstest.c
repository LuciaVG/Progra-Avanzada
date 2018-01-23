#include <stdio.h>
#include "operations.h"

void printTestMessage(int condition, char *mpassed, char *mfailed){
  if(condition){
    printf(mpassed);
  } else {
    printf(mfailed);
  }
}

int testAddition(){
  int a = 1;
  int b = 19;

  int result = add(a, b);
  int expected = a + b;

  return result == expected;

}

int testSubstraction(){
  int c = 3;
  int d = 1;

  int result2 = substraction(c, d);
  int expected2 = c - d;

  return result2 == expected2;
}

int main() {
  //Test add
  printTestMessage(testAddition(),
                    "add test passed",
                    "add test failed");

  printTestMessage(testSubstraction(),
                    "substraction test passed",
                    "substraction test failed");

  return 0;
}
