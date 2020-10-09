/* 
  Union of 2 sorted arrays
*/

#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

Array *Union_for_sorted(Array *arr1, Array *arr2)
{
  int i = 0, j = 0, k = 0;
  Array *arr3 = (Array *)malloc(sizeof(Array));
  while (i < arr1->length && j < arr2->length)
  {
    if (arr1->arr[i] < arr2->arr[j])
      arr3->arr[k++] = arr1->arr[i++];
    else if (arr2->arr[j] < arr1->arr[i])
      arr3->arr[k++] = arr2->arr[j++];
    else
    {
      arr3->arr[k++] = arr1->arr[i++];
      j++;
    }
  }
  for (; i < arr1->length; i++)
    arr3->arr[k++] = arr1->arr[i];
  for (; j < arr2->length; j++)
    arr3->arr[k++] = arr2->arr[j];

  arr3->length = k;
  arr3->size = 10;

  return arr3;
}

Array *Union(Array *arr1, Array *arr2)
{
  Array *arr3 = (Array *)malloc(sizeof(Array));

  int found;

  int k = 0;
  for (int i = 0; i < arr1->length; i++)
    arr3->arr[k++] = arr1->arr[i];

  for (int i = 0; i < arr2->length; i++)
  {
    found = 0;
    for (int j = 0; j < k; j++)
    {
      if (arr3->arr[j] == arr2->arr[i])
      {
        found = 1;
        break;
      }
    }
    if (found == 0)
      arr3->arr[k++] = arr2->arr[i];
  }

  arr3->length = k;
  return arr3;
}

int main()
{
  Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
  Array arr2 = {{3, 6, 7, 18, 20}, 10, 5};
  Array *arr3;
  Array *arr4;

  arr3 = Union_for_sorted(&arr1, &arr2);
  arr4 = Union(&arr1, &arr2);

  Display(*arr3);
  printf("\n");
  Display(*arr4);

  return 0;
}