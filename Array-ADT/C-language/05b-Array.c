/* 
  Using Move to Front to improve linear search
*/

#include <stdio.h>
#include "Array.h"

int LinearSearch(Array *arr, int key)
{
  for (int index = 0; index < arr->length; index++)
  {
    if (key == arr->arr[index])
    {
      swap(&arr->arr[index], &arr->arr[0]);
      return index;
    }
  }

  //Returning -1 if the element is not found
  return -1;
}

int main()
{
  //Initializing array so that we won't have to input everytime just to test the program
  Array arr = {{2, 3, 4, 5, 6}, 20, 5};

  printf("%d\n", LinearSearch(&arr, 3));

  Display(arr);

  return 0;
}