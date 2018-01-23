#include <stdlib.h>
#include <stdio.h>

int put(int key, int indx, int index[], int size, int array[]) {
  int k;
  for(k = key % size; array[k % size] != -1; k++){
  }
  array[k] = key;
  index[k] = indx;
  return key;
}

int get(int key, int index[], int size, int array[]){
  for(int k = key % size; array[k % size] != -1; k++){
    if(array[k] == key){
      return index[k];
    }
  }
  return -1;
}

int* anagramMappings(int* A, int ASize, int* B, int BSize, int* returnSize) {
  int size = BSize * 3;
  int keys[size];
  int index[size];
  int k;

  for(k = 0; k< size; k++){
    keys[k] = -1;
    index[k] = -1;
  }

  for(k = 0; k< BSize; k++){
    put(B[k], k, index, size, keys);
  }

  int *C = malloc( sizeof(int) * ASize );

  for(k = 0; k< ASize; k++){
    C[k] = get(A[k], index, size, keys);
  }

  return C;
}

int main(int argc, char const *argv[]) {

  return 0;
}
