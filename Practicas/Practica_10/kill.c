#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void receiveSignal(int sig){
  printf("HOLA MUNDO\n")
  printf("Recibi sennal%d\n", sig);
}

int main(int argc, char const **argv) {
  kill(atoi(argv[1]),atoi(argv[2]));
  return 0;
}
