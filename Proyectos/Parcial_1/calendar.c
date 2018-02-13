  #include <stdio.h>
  #include <stdlib.h>

  int cant(int m, int y){
    int days = 30;

    if(m < 8){
      if (m % 2 == 1){
        return days+1;
      }

      if (m == 2) {
        if (y % 4 == 0){
          if(y % 400 ){
            return days-1;
          }
          if(y % 100){
            return days-2;
          }
          return days-1;
        }
        return days-2;
      }
    } else {
      if (m % 2 == 0){
        return days+1;
      }
  }

    return days;
  }

  void calendar(int k, int m, int y){
    int w;
    int c = y/100;
    int days = cant(m, y);
    int mon;
    int i;

    m = (m + 10)%13;
    y -= (c*100);

    if (m > 10){
      y -= 1;
    }

    w = (k + (2.6 * m - .2) - (2 * c) + y + (y/4) + (c/4));
    w = w % 7;
    w = (w + 6) % 7;

    mon = k - w;

    while(mon > 1){
      mon -= 7;
    }
    printf("mon.");
    for (i = mon; i <= days; i+= 7){
      printf(".");
      if(i > 0){
        if(i == k){
          printf("[%d]", i);
        } else {
          printf(".%d.", i);
        }
      } else {
        printf("...");
      }
    }
    printf("\n");
    mon ++;

    printf("tue.");
    for (i = mon; i <= days; i+= 7){
      printf(".");
      if(i > 0){
        if(i == k){
          printf("[%d]", i);
        } else {
          printf(".%d.", i);
        }
      } else {
        printf("...");
      }
    }
    printf("\n");
    mon++;

    printf("wed.");
    for (i = mon; i <= days; i+= 7){
      printf(".");
      if(i > 0){
        if(i == k){
          printf("[%d]", i);
          } else {
            printf(".%d.", i);
          }
        } else {
          printf("...");
        }
      }
      printf("\n");
      mon++;

      printf("thu.");
      for (i = mon; i <= days; i+= 7){
        printf(".");
        if(i > 0){
          if(i == k){
            printf("[%d]", i);
            } else {
              printf(".%d.", i);
            }
          } else {
            printf("...");
          }
        }
        printf("\n");
        mon++;

        printf("fri.");
        for (i = mon; i <= days; i+= 7){
          printf(".");
          if(i > 0){
            if(i == k){
              printf("[%d]", i);
              } else {
                printf(".%d.", i);
              }
            } else {
              printf("...");
            }
          }
          printf("\n");
          mon++;

          printf("sat.");
          for (i = mon; i <= days; i+= 7){
            printf(".");
            if(i > 0){
              if(i == k){
                printf("[%d]", i);
                } else {
                  printf(".%d.", i);
                }
              } else {
                printf("...");
              }
            }
            printf("\n");
            mon++;

            printf("sun.");
            for (i = mon; i <= days; i+= 7){
              printf(".");
              if(i > 0){
                if(i == k){
                  printf("[%d]", i);
                  } else {
                    printf(".%d.", i);
                  }
                } else {
                  printf("...");
                }
              }
              printf("\n");
              mon++;
    //printf("%d\n", mon);

  }

  int main(int argc, char const *argv[]) {
    /* code */
    calendar(12,2,2018);
    return 0;
  }
