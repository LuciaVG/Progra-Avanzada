#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool judgeCircle(char* moves) {

  int x = 0;
  int y = 0;

  for(int i = 0; moves[i] != '\0'; i++){

    switch (moves[i]) {
      case 'U': y++;
      break;
      case 'D': y--;
      break;
      case 'R': x++;
      break;
      default: x--;
    }
  }
  
  return (x == 0 && y == 0);
}

int main(int argc, char const *argv[]) {
  printf("%d",judgeCircle("UDUUUUUDDDDLLLRLRLR"));
  return 0;
}
