#include <stdio.h>
#include "Array.h"

int Get(Array arr, int index)
{
  if (index >= 0 && index < arr.length)
    return arr.arr[index];
  return -1;
}

void Set(Array *arr, int index, int val)
{
  if (index >= 0 && index < arr->length)
    arr->arr[index] = val;
}

int Max(Array arr)
{
  int max = arr.arr[0];
  for (int i = 0; i < arr.length; i++)
  {
    if (arr.arr[i] > max)
      max = arr.arr[i];
  }
  return max;
}

int Min(Array arr)
{
  int min = arr.arr[0];
  for (int i = 0; i < arr.length; i++)
  {
    if (arr.arr[i] < min)
      min = arr.arr[i];
  }
  return min;
}

int Sum(Array arr)
{
  int sum = 0;
  for (int i = 0; i < arr.length; i++)
    sum += arr.arr[i];

  return sum;
}

float Avg(Array arr)
{
  return (float)Sum(arr) / arr.length;
}

int main()
{
  Array arr = {{2, 3, 4, 5, 6}, 10, 5};

  printf("%d\n", Get(arr, 2));
  Set(&arr, 2, 10);
  printf("%d\n", Max(arr));
  printf("%d\n", Min(arr));
  printf("%d\n", Sum(arr));
  printf("%f\n", Avg(arr));
  Display(arr);
}