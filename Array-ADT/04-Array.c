#include <stdio.h>
#include <Array.h>

void Delete(struct Arr *arr, int index)
{
}

int main()
{
  //Initializing array so that we won't have to input everytime just to test the program
  struct Array arr = {{2, 3, 4, 5, 6}, 20, 5};

  Insert(&arr, 5, 10);
  Display(arr);

  return 0;
}