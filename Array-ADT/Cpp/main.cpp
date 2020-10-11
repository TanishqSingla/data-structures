#include <iostream>

class Array
{
private:
  int *arr;
  int size;
  int length;
  void swap(int &x, int &y)
  {
    int temp = x;
    x = y;
    y = temp;
  }

  Array(int s, int l)
  {
    size = s;
    length = l;
    arr = new int[size];
  }
  ~Array()
  {
    delete[] arr;
  }

public:
  void Display()
  {
    std::cout << "Elements are" << std::endl;
    for (int i = 0; i < length; i++)
      std::cout << arr[i] << " ";
  }
  void Append(int val)
  {
    if (length < size)
      arr[length++] = val;
  }
  void Insert(int index, int val)
  {
    if (index >= 0 && index <= length)
    {
      for (int i = length; i > index; i--)
        arr[i] = arr[i - 1];
      arr[index] = val;
      length++;
    }
  }
  int LinearSearch();
  int BinarySearch();
  int Get();
  int Set();
  int Max();
  int Min();
  int Sum();
  float Avg();
};
