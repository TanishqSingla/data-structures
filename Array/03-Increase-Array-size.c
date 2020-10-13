#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p = (int *)malloc(sizeof(int) * 5);

  //Initializing array
  p[0] = 1, p[1] = 2, p[2] = 3, p[3] = 4, p[4] = 5;

  int *q = (int *)malloc(sizeof(int) * 5);

  //copying elements of p to q
  for (int i = 0; i < 5; i++)
    q[i] = p[i];

  free(p);

  p = q;
  q = NULL;

  return 0;
}