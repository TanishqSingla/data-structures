#include <iostream>

class Array
{
private:
  int *arr;
  int size;
  int length;

public:
  Array()
  {
    size = 10;
    arr = new int[10];
    length = 0;
  }
  Array(int s)
  {
    size = s;
    arr = new int[size];
    length = 0;
  }
  ~Array()
  {
    delete[] arr;
  }

  void Display()
  {
    std::cout << "Elements are" << std::endl;
    for (int i = 0; i < length; i++)
      std::cout << arr[i] << " ";
    std::cout << std::endl;
  }

  void Insert(int index, int val)
  {
    if (index >= 0 && index <= length)
    {
      for (int i = length - 1; i >= index; i--)
        arr[i + 1] = arr[i];
      arr[index] = val;
      length++;
    }
  }

  int Delete(int index)
  {
    int x;
    if (index >= 0 && index < length)
    {
      x = arr[index];
      for (int i = index; i < length - 1; i++)
        arr[i] = arr[i + 1];
      length--;
    }
    return x;
  }
};

int main()
{
  Array arr(10);

  arr.Insert(0, 5);
  arr.Insert(1, 6);
  arr.Insert(2, 9);

  arr.Display();

  return 0;
}