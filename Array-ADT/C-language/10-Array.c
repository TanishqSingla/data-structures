#include <stdio.h>
#include "Array.h"

//Positive on right and negative on left, not sorted but arranged
int Rearrange(Array *arr)
{
  int i = 0, j = arr->length - 1;
  while (i < j)
  {
    while (arr->arr[i] < 0)
      i++;
    while (arr->arr[j] >= 0)
      j--;
    if (i < j)
      swap(&arr->arr[i], &arr->arr[j]);
  }
}

int main()
{
  Array arr = {{2, -3, 25, 10, -15, -7}, 10, 6};

  Rearrange(&arr);

  Display(arr);
  return 0;
}