#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int *arr;
  int size;
  int length;
};

int main()
{

  struct Array arr;
  int ch;

  printf("Enter Size of Array ");
  scanf("%d", &arr.size);

  arr.arr = (int *)malloc(arr.size * sizeof(int));

  printf("Menu\n");
  printf("1. Display Elements");
  printf("2. Append Element");

  return 0;
}