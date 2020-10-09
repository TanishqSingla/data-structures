/* 
  Intersection of 2 sorted arrays
*/

#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

Array *Intersection_for_sorted(Array *arr1, Array *arr2)
{
  int i = 0, j = 0, k = 0;
  Array *arr3 = (Array *)malloc(sizeof(Array));
  while (i < arr1->length && j < arr2->length)
  {
    if (arr1->arr[i] < arr2->arr[j])
      i++;
    else if (arr2->arr[j] < arr1->arr[i])
      j++;
    else //Copying element to array if equal
    {
      arr3->arr[k++] = arr1->arr[i++];
      j++;
    }
  }

  arr3->length = k;
  arr3->size = 10;

  return arr3;
}

Array *Intersection(Array *arr1, Array *arr2)
{
  Array *arr3 = (Array *)malloc(sizeof(Array));

  int k = 0;

  for (int i = 0; i < arr1->length; i++)
  {
    for (int j = 0; j < arr2->length; j++)
    {
      if (arr1->arr[i] == arr2->arr[j])
        arr3->arr[k++] = arr1->arr[i];
    }
  }
  arr3->length = k;
  arr3->size = 10;
}

int main()
{
  Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
  Array arr2 = {{3, 6, 7, 15, 20}, 10, 5};
  Array *arr3;
  Array *arr4;

  arr3 = Intersection_for_sorted(&arr1, &arr2);
  arr4 = Intersection(&arr1, &arr2);

  Display(*arr3);
  Display(*arr4);

  return 0;
}