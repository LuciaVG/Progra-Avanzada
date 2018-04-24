#include <stdio.h>

typedef struct d{
  unsigned day:5;
  unsigned month:4;
  unsigned year;
  unsigned flags:5;
} Date;

#define LEAP_MASK 0b10000
#define PRIME_MASK 0b0010

int main(int argc, char const *argv[]) {
  Date today = {23,4,2018};
  printf("size of date %ld\n", sizeof(today));
  printf("date %d/%d/%d \n", today.day, today.month, today.year);
  if(today.day ^ 23){
    printf("NOOO \n");
  } else {
    printf("YES \n");
  }

  today.flags = 0b10000;
  if(today.flags & (LEAP_MASK | PRIME_MASK) == 0){
    printf("Year is leap or is prime\n");
  }
  return 0;
}
