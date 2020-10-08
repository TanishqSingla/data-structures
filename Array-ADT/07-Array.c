#include <stdio.h>
#include "Array.h"

int Get(struct Array arr, int index)
{
  if (index >= 0 && index < arr.length)
    return arr.arr[index];
  return -1;
}

void Set(struct Array *arr, int index, int val)
{
  if (index >= 0 && index < arr->length)
    arr->arr[index] = val;
}

int max(struct Array arr)
{
  int max = arr.arr[0];
  for (int i = 0; i < arr.length; i++)
  {
    if (arr.arr[i] > max)
      max = arr.arr[i];
  }
  return max;
}

int min(struct Array arr)
{
  int min = arr.arr[0];
  for (int i = 0; i < arr.length; i++)
  {
    if (arr.arr[i] < min)
      min = arr.arr[i];
  }
  return min;
}

int main()
{
  struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

  Display(arr);
}