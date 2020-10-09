#include <stdio.h>
#include "Array.h"

void Insert(Array *arr, int index, int val)
{
  if (index >= 0 && index <= arr->length)
  {
    for (int i = arr->length; i > index; i--)
      arr->arr[i] = arr->arr[i - 1];
    arr->arr[index] = val;
    arr->length++;
  }
}

int main()
{
  //Initializing array so that we won't have to input everytime just to test the program
  Array arr = {{2, 3, 4, 5, 6}, 20, 5};

  Insert(&arr, 5, 10);
  Display(arr);

  return 0;
}