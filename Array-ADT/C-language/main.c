#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int *arr;
  int size;
  int length;
};

void Display();

int main()
{

  struct Array arr;
  int ch;

  printf("Enter Size of Array ");
  scanf("%d", &arr.size);

  arr.arr = (int *)malloc(arr.size * sizeof(int));

  printf("Menu\n");
  printf("1. Display elements");
  printf("2. Append value");
  printf("3. Insert value");
  printf("4. Delete at index");
  printf("5. Search an element (linear)");
  printf("6. Search an element (Binary)");
  printf("7. Get value at index");
  printf("8. Set value at index");
  printf("9. Set value at index");
  printf("10. Find Maximum");
  printf("11. Find Minimum");
  printf("12. Sum of array");
  printf("13. Average of array");
  printf("14. Reverse the elements");
  printf("15. Union of arrays");
  printf("16. Intersection of arrays");
  printf("17. Difference of two arrays");
  return 0;
}