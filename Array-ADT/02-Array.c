#include <stdio.h>
#include "Array.h"

struct Array
{
  //setting fixed size just for implementations
  int arr[20];
  int size;
  int length;
};

void Append(struct Array *arr, int val)
{
  if (arr->length < arr->size)
    arr->arr[arr->length++] = val;
}

int main()
{
  //Initializing array so that we won't have to input everytime just to test the program
  struct Array arr = {{2, 3, 4, 5, 6}, 20, 5};

  Append(&arr, 10);
  Display(arr);

  return 0;
}