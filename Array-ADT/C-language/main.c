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

void Reverse(Array *arr)
{
  /* 
    In this method we swap the index element with (length - index) element
  */
  for (int i = 0, j = arr->length - 1; i < j; i++, j--)
  {
    swap(&arr->arr[i], &arr->arr[j]);
  }
}

Array *Union(Array *arr1, Array *arr2)
{
  Array *arr3 = (Array *)malloc(sizeof(Array));

  int found;

  int k = 0;
  for (int i = 0; i < arr1->length; i++)
    arr3->arr[k++] = arr1->arr[i];

  for (int i = 0; i < arr2->length; i++)
  {
    found = 0;
    for (int j = 0; j < k; j++)
    {
      if (arr3->arr[j] == arr2->arr[i])
      {
        found = 1;
        break;
      }
    }
    if (found == 0)
      arr3->arr[k++] = arr2->arr[i];
  }

  arr3->length = k;
  return arr3;
}

int main()
{

  Array arr;
  int ch, index, val;

  printf("Enter Size of Array ");
  scanf("%d", &arr.size);

  arr.arr = (int *)malloc(arr.size * sizeof(int));

  printf("Enter number of elements you want to enter ");
  scanf("%d", arr.length);

  printf("Enter elements\n");

  for (int i = 0; i < arr.length; i++)
    scanf("%d ", &arr.arr[i]);

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
    printf("9. Find Maximum");
    printf("10. Find Minimum");
    printf("11. Sum of array");
    printf("12. Average of array");
    printf("13. Reverse the elements");
    printf("14. Union of arrays");
    printf("15. Intersection of arrays");
    printf("16. Difference of two arrays");

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
    case 7:
      printf("Enter index ");
      scanf("%d", &index);
      val = Get(arr, index);
      val == -1 ? printf("No such value found") : printf("Value found is %d", val);
      break;
    case 8:
      printf("Enter index ");
      scanf("%d", index);
      printf("Enter value ");
      scanf("%d", val);
      break;
    case 9:
      printf("Max value is %d", Max(arr));
      break;
    case 10:
      printf("Min value is %d", Min(arr));
      break;
    case 11:
      printf("Sum of array %d", Sum(arr));
      break;
    case 12:
      printf("Average of array %f", Avg(arr));
      break;
    case 13:
      Reverse(&arr);
      Display(arr);
      break;
    case 14:
      Array arr2;
      printf("Enter size of second array ");
      scanf("%d", arr2.size);
      printf("Enter number of elements in second array ");
      scanf("%d", arr2.length);
      for (int i = 0; i < arr.length; i++)
        scanf("%d", &arr2.arr[i]);
      Array *arr3;
      arr3 = Union(&arr, &arr2);
      Display(*arr3);
      break;
    }
  } while (ch != 0);

  return 0;
}