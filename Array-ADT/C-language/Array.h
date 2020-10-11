struct Array
{
  //setting fixed size just for implementations
  int arr[20];
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

void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}