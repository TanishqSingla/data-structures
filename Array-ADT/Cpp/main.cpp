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

public:
  Array()
  {
    size = 10;
    length = 0;
    arr = new int[size];
  }

  Array(int s)
  {
    size = s;
    length = 0;
    arr = new int[size];
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
  void Set(int index, int val)
  {
    if (index >= 0 && index < length)
      arr[index] = val;
  }
  int Max()
  {
    int max = arr[0];
    for (int i = 0; i < length; i++)
    {
      if (max < arr[i])
        max = arr[i];
    }
    return max;
  }
  int Min()
  {
    int min = arr[0];
    for (int i = 0; i < length; i++)
    {
      if (min > arr[i])
        min = arr[i];
    }
    return min;
  }
  int Sum()
  {
    int sum = 0;
    for (int i = 0; i < length; i++)
      sum += arr[i];

    return sum;
  }
  float Avg()
  {
    return (float)Sum() / length;
  }
};

int main()
{
  return 0;
}