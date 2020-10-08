#include <stdio.h>
#include "Array.h"

void Insert_in_Sorted(Array *arr, int val)
{
  int i = arr->length - 1;
  if (arr->length == arr->size)
    return;
  while (i >= 0 && arr->arr[i] > val)
  {
    arr->arr[i + 1] = arr->arr[i];
    i--;
  }
  arr->arr[i + 1] = val;
  arr->length++;
}

int main()
{
  Array arr = {{2, 3, 5, 10, 15}, 10, 5};

  Insert_in_Sorted(&arr, 12);

  Display(arr);
  return 0;
}