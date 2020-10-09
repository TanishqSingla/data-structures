#include <iostream>

class Array
{
private:
  int *arr;
  int size;
  int length;
  void swap(int &x, int &y);

  Array()
  {
  }
  ~Array()
  {
    delete[] arr;
  }

public:
  void Display();
  void Append(int val);
  void Insert(int index, int val);
  int LinearSearch();
  int BinarySearch();
  int Get();
  int Set();
  int Max();
  int Min();
  int Sum();
  float Avg();
};

void Array::Display()
{
  printf("Elements are\n");
  for (int i = 0; i < length; i++)
  {
    printf("%d ", arr[i]);
  }
}
