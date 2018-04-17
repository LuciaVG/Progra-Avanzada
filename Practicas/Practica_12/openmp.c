#include <stdio.h>
#include <omp.h>

int main(int argc, char const *argv[]) {
  int tid;
  int gid;
  #pragma omp parallel
  {
      //printf("Hello World\n");
      tid = omp_get_thread_num();
      gid = tid;
      printf("Hello World %d %d\n", tid, gid);
  }

  return 0;
}
