#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  FILE *myFile;
  myFile = fopen("input.txt", "r");
  char input[1100];
  char *words;
  int num_inputs;

  if (myFile) {
    words = fgets(input, sizeof(input), myFile);
    num_inputs = atoi(words);

    for (int k = 0; k < num_inputs; k++){
      char  *myArray[100];
      words = fgets(input, sizeof(input), myFile);
      words = strtok(words, "\n");
      int i=0;
      int count = 0;

      myArray[i] = strtok(words," ");

      while(myArray[i]!=NULL)
      {
        count++;
        myArray[++i] = strtok(NULL," ");
      }
      myArray[count-1];
      for(int j = count-1; j>=0; j--){
        printf("%s ", myArray[j]);
      }
      printf("\n");
    }

  }
}
