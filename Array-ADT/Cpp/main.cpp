#include <iostream>

class Array
{
private:
  int *arr;
  int size;
  int length;
  void swap(int& x, int& y);

public:
  void Display();
  void Append(int val);
  void Insert(int index, int val);
  void LinearSearch()
}