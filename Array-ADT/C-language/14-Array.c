/* 
  Difference of arr2 from arr1 i.e arr1-arr2
  both the arrays are sorted
*/

#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

Array *Difference_for_sorted(Array *arr1, Array *arr2)
{
  int i = 0, j = 0, k = 0;
  Array *arr3 = (Array *)malloc(sizeof(Array));
  while (i < arr1->length && j < arr2->length)
  {
    if (arr1->arr[i] < arr2->arr[j])
      arr3->arr[k++] = arr1->arr[i++]; //Copy the element of arr1
    else if (arr2->arr[j] < arr1->arr[i])
      j++; //Skip the element in arr2
    else
    {
      // Skip the element if its equal
      i++;
      j++;
    }
  }
  for (; i < arr1->length; i++)
    arr3->arr[k++] = arr1->arr[i];

  arr3->length = k;
  arr3->size = 10;

  return arr3;
}

Array *Difference(Array *arr1, Array *arr2)
{
  int k = 0;
  Array *arr3 = (Array *)malloc(sizeof(Array));

  int flag;

  for (int i = 0; i < arr1->length; i++)
  {
    flag = 0;
    for (int j = 0; j < arr2->length; j++)
    {
      if (arr1->arr[i] == arr2->arr[j])
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
      arr3->arr[k++] = arr1->arr[i];
  }

  arr3->length = k;
  arr3->size = 10;

  return arr3;
}

int main()
{
  Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
  Array arr2 = {{3, 6, 7, 15, 20}, 10, 5};
  Array *arr3;
  Array *arr4;

  arr3 = Difference_for_sorted(&arr1, &arr2);
  arr4 = Difference(&arr1, &arr2);

  Display(*arr3);
  Display(*arr4);

  return 0;
}