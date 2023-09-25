#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, j, numArray[6];
  for(i = 0; i < 6; i++) 
    numArray[i] = rand() % 10;
  for(j = 0; j < 6; j++)
  printf("%d ", numArray[j]);
  return 0;
}