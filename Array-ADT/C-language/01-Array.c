#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int *arr;
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

int main()
{
  struct Array arr;
  int n;

  printf("Enter the size of array ");
  scanf("%d", &arr.size);

  arr.arr = (int *)malloc(arr.size * sizeof(int));
  arr.length = 0; //initial length is 0 as there is no element inside array

  printf("Enter number of elements you want to enter ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
    scanf("%d", &arr.arr[i]);
  arr.length = n; //Setting the length to n

  //Displaying the elements
  Display(arr);

  return 0;
}