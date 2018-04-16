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

int twoMovies(int* movie_lengths, int arraySize, int flight_length) {

  int complement;
  int size = (arraySize * 2)-1;
  int keys[size];
  int index[size];
  int k, i;
  int num = -1;


  for(k = 0; k< size; k++){
    keys[k] = -1;
    index[k] = -2;
  }

  for(k = 0; k< arraySize; k++){

    complement = flight_length - movie_lengths[k];
    num = get(complement, index, size, keys);

    if (num != -1 && num != complement){
      return 1;

    } else {
      put(movie_lengths[k], k, index, size, keys);
    }
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int nms[] = {3,2,4,5,6,7,11,23,15,3};
  int len = sizeof(nms)/sizeof(nms[0]);
  int ans = twoMovies(nms, len, 6);
  printf("%d\n", ans);
  return 0;
}
