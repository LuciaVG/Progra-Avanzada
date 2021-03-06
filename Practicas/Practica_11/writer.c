#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <string.h>
#include "student.h"


int main(int argc, char const *argv[]) {
  char *fileName = "student.dat";
  int fd = open(fileName, O_RDWR);
  int id;
  char name[20];
  Student *pAvanzada = (Student *)mmap(NULL, 10*sizeof(Student),PROT_READ | PROT_WRITE, MAP_FILE | MAP_SHARED, fd, 0);
  close(fd);
  for(int i = 0; i<4; i++){
    printf("Give an ID and name\n");
    scanf("%d %s", &id, name);
    //while(getchar() != '\n');

    strcpy(pAvanzada[id].firstName, name);
    printf("%s\n", pAvanzada[id].firstName);
  }

  munmap(pAvanzada, 10*sizeof(Student));
  return 0;
}
