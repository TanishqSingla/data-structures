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
  int Delete(int index)
  {
    int x = 0;

    if (index >= 0 && index <= length - 1)
    {
      x = arr[index];
      for (int i = index; i < length - 1; i++)
        arr[i] = arr[i + 1];
      length--;
      return x;
    }

    return 0;
  }
  int LinearSearch(int key)
  {
    for (int index = 0; index < length; index++)
    {
      if (key == arr[index])
        return index;
    }

    //Returning -1 if the element is not found
    return -1;
  }
  int BinarySearch(int key)
  {
    int low, mid, high;
    low = 0;
    high = length - 1;

    while (low <= high)
    {
      mid = (low + high) / 2;
      if (key == arr[mid])
        return mid;
      else if (key < arr[mid])
        high = mid - 1;
      else
        low = mid + 1;
    }

    return -1;
  }
  int Get(int index)
  {
    if (index >= 0 && index < length)
      return arr[index];
    return -1;
  }
  int Set();
  int Max();
  int Min();
  int Sum();
  float Avg();
};

int main()
{
  return 0;
}