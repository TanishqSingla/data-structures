/* 
  This file contains different methods of creating a 2d array
*/

#include <stdio.h>

int main()
{
  //Method 1, static declaration
  int a[3][4];

  //Method 2 array of pointers
  int *b[3];
  b[0] = new int[4];
  b[1] = new int[4];
  b[2] = new int[4];

  //Method 3 - Double pointer
  int **p;
  p = new int *[3];

  p[0] = new int[4];
  p[1] = new int[4];
  p[2] = new int[4];

  return 0;
}