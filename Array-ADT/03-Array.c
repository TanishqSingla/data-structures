#include <stdio.h>

struct Array
{
  //setting fixed size just for implementations
  int arr[20];
  int size;
  int length;
};

void Display(struct Array arr)
{
  printf("Elements are \n");
  for (int i = 0; i < arr.length; ++i)
  {
    printf("%d ", arr.arr[i]);
  }
}

void Insert(struct Array *arr, int index, int val)
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
  struct Array arr = {{2, 3, 4, 5, 6}, 20, 5};

  Append(&arr, 10);
  Display(arr);

  return 0;
}