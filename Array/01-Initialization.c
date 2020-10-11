#include <stdio.h>
int main()
{
  /*  
    Declaration: Declaring an array creates a block in memory whose size is equal to the (size * size of type)
  */
  int a[5]; //creates a block of memory whose size is equal to 5 integers.

  /* 
    Assignment: For assigning we access a particular index in the block and then assign it with a value

    For accessing a particular element in an array following notations can be used:
    identifier[index]
    index[identifier]
    *(index + identifier)
  */

  a[1] = 10;
  2 [a] = 20;
  *(3 + a) = 30;

  for (int i = 0; i < 5; i++)
    printf("%d ", a[i]);
  printf("\n");

  /* 
    Initialization: Initialization is done at runtime, whenever we initialize an array, all the elements are assigned a value. 
    If there is no value assigned to a particular index during initialization it is assigned 0
  */
  int b[5] = {1, 2, 3, 4, 5};
  int c[5] = {1, 2};

  for (int i = 0; i < 5; i++)
    printf("%d ", b[i]);

  printf("\n");

  for (int i = 0; i < 5; i++)
    printf("%d", c[i]);

  return 0;
}