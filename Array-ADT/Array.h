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