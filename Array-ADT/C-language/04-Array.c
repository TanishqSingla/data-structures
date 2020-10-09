#include <stdio.h>
#include "Array.h"

int Delete(Array *arr, int index)
{
  int x = 0;

  if (index >= 0 && index <= arr->length - 1)
  {
    x = arr->arr[index];
    for (int i = index; i < arr->length - 1; i++)
      arr->arr[i] = arr->arr[i + 1];
    arr->length--;
    return x;
  }

  return 0;
}

int main()
{
  //Initializing array so that we won't have to input everytime just to test the program
  Array arr = {{2, 3, 4, 5, 6}, 20, 5};

  printf("%d\n", Delete(&arr, 4));
  Display(arr);

  return 0;
}