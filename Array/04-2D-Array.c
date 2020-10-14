#include <stdio.h>

int main()
{
  //Declaration
  int a[3][4];

  //Initializtaion
  int b[3][4] = {
      {1, 2, 3, 4},
      {2, 3, 4, 5},
      {3, 4, 5, 6},
  };

  //Printing output
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
      printf("%d ", b[i][j]);
    printf("\n");
  }

  return 0;
}