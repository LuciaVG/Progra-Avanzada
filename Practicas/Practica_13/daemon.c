#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main(int argc, char const *argv[]) {
  int pid;
  pid = fork();
  if(pid == 0){
    pid = fork();
    if(pid == 0){
      fclose(stdin);
      fclose(stdout);
      fclose(stderr);
      unmask(0);
      chdir("/tmp");
      while(1){
      }
    }
  }
  return 0;
}
