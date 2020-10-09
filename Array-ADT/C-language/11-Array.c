#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

Array *Merge(Array *arr1, Array *arr2)
{
  int i = 0, j = 0, k = 0;
  Array *arr3 = (Array *)malloc(sizeof(Array));
  while (i < arr1->length && j < arr2->length)
  {
    if (arr1->arr[i] < arr2->arr[j])
      arr3->arr[k++] = arr1->arr[i++];
    else
      arr3->arr[k++] = arr2->arr[j++];
  }
  for (; i < arr1->length; i++)
    arr3->arr[k++] = arr1->arr[i];
  for (; j < arr2->length; j++)
    arr3->arr[k++] = arr2->arr[j];

  arr3->length = arr1->length + arr1->length;
  arr3->size = arr1->size + arr2->size;

  return arr3;
}

int main()
{
  Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
  Array arr2 = {{3, 4, 7, 18, 20}, 10, 5};
  Array *arr3;
  arr3 = Merge(&arr1, &arr2);

  Display(*arr3);

  return 0;
}