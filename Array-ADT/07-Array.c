#include <stdio.h>
#include "Array.h"

int main()
{
  struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

  Display(arr);
}