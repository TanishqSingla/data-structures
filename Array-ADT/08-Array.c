#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

void Reverse_aux(Array *arr)
{
  /* 
  In Reverse_aux we will create a auxillary array or create a copy of array and then copy the elements back to original array, hence the name reverse_aux
  */
  int *B;
  int i, j;

  B = (int *)malloc(arr->length * sizeof(int));

  for (int i = arr->length - 1, j = 0; i >= 0; i--, j++)
    B[j] = arr->arr[i];

  for (int i = 0; i < arr->length; i++)
    arr->arr[i] = B[i];
}

void Reverse(Array *arr)
{
  /* 
    In this method we swap the index element with (length - index) element
  */
  for (int i = 0, j = arr->length - 1; i < j; i++, j--)
  {
    swap(&arr->arr[i], &arr->arr[j]);
  }
}

int main()
{
  Array arr = {{2, 3, 4, 5, 6}, 10, 5};

  Reverse_aux(&arr);
  Reverse(&arr);
  Display(arr);
  return 0;
}