#include<stdio.h>

int calculate(int x, int y){
  int ans = 1;

  for(int j = 0; j < x; j++){
    ans = ans * (y-j)/(j+1);
  }
  return ans;
}

int main(){
  int times;
  int marbles;
  int colors;
  int ans;

  scanf("%d",&times);
  for(int i = 0; i < times; i++){
    ans = 1;
    scanf("%d %d", &marbles, &colors);
    marbles --;
    colors --;

    if (colors*2>marbles){
      colors = marbles-colors;
    }
    ans = calculate(colors, marbles);

    printf("%d\n",ans);
  }
}
