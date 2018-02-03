#include <stdio.h>
#include <stdlib.h>

int main() {
int numsegmentos;
int totalTime;

int *distances;
int *speeds;

scanf("%d %d",&numsegmentos,&totalTime);

distances = (int *)malloc(sizeof((int)*numsegmentos));
speeds = (int *)malloc(sizeof((int)*numsegmentos));

for (int i=0;i< numsegmentos;i++){
scanf("%d %d",&distances[i],&speeds[i]);
}
/* code */
return 0;
}
