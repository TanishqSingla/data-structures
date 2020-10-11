#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int *arr;
  int size;
  int length;
};

#define Array struct Array

void Display(Array arr)
{
  printf("Elements are \n");
  for (int i = 0; i < arr.length; ++i)
  {
    printf("%d ", arr.arr[i]);
  }
}

void Append(Array *arr, int val)
{
  if (arr->length < arr->size)
    arr->arr[arr->length++] = val;
}

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

int LinearSearch(Array arr, int key)
{
  for (int index = 0; index < arr.length; index++)
  {
    if (key == arr.arr[index])
      return index;
  }

  //Returning -1 if the element is not found
  return -1;
}

int BinarySearch(Array arr, int key)
{
  int low, mid, high;
  low = 0;
  high = arr.length - 1;

  while (low <= high)
  {
    mid = (low + high) / 2;
    if (key == arr.arr[mid])
      return mid;
    else if (key < arr.arr[mid])
      high = mid - 1;
    else
      low = mid + 1;
  }

  return -1;
}

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

  Array arr;
  int ch, index, val;

  printf("Enter Size of Array ");
  scanf("%d", &arr.size);

  arr.arr = (int *)malloc(arr.size * sizeof(int));

  do
  {
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

    switch (ch)
    {
    case 1:
      Display(arr);
      break;
    case 2:
      printf("Enter value ");
      scanf("%d", &val);
      Append(&arr, val);
      break;
    case 3:
      printf("Enter index ");
      scanf("%d", &index);
      printf("Enter value");
      scanf("%d", &val);
      Insert(&arr, index, val);
      break;
    case 4:
      printf("Enter index");
      scanf("%d", &index);
      val = Delete(&arr, index);
      val == 0 ? printf("No such value") : printf("Value deleted %d", val);
    case 5:
      printf("Enter value ");
      scanf("%d", &val);
      index = LinearSearch(arr, val);
      index == -1 ? printf("No such value") : printf("Value found at index %d", index);
      break;
    case 6:
      printf("Enter value ");
      scanf("%d", &val);
      index = BinarySearch(arr, val);
      index == -1 ? printf("No such value found") : printf("Value found at index", index);
      break;
    }

  } while (ch != 0);

  return 0;
}