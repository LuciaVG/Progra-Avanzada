#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *myFile;
    myFile = fopen("B-large-practice.in", "r");
    int tme, min;

    char input[7000];
    char *words;
    int num_inputs, size_array;

    if (myFile) {
      words = fgets(input, sizeof(input), myFile);
      num_inputs = atoi(words);

      for (int k = 0; k < num_inputs; k++){
        words = fgets(input, sizeof(input), myFile);
        size_array = atoi(words);
        char  *myArray[size_array];
        int  myArray2[size_array];
        words = fgets(input, sizeof(input), myFile);
        words = strtok(words, "\n");
        int i=0;

        myArray[i] = strtok(words," ");

        while(myArray[i]!=NULL)
        {
          myArray[++i] = strtok(NULL," ");
        }
        for(int j = 0; j < size_array; j++){
          myArray2[j] = atoi(myArray[j]);
        }

        min = 1000;

        for(int x = 1; x <= 1000; x++){
          tme = x;
          for(int j = 0; j < size_array; j++){
            tme += (myArray2[j] - 1)/x;
          }
          if(tme < min){
            min = tme;
          }
        }

        printf("Case #%d: %d\n", k+1, min);
      }

    }

    return 0;
}
