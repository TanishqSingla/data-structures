//Recursive display function in a linked list

#include "linkedList.h"

void Display_r(struct Node *p)
{
  if (p != NULL)
  {
    printf("%d ", p->data);
    Display(p->next);
  }
}

int main()
{
  int arr[] = {3, 4, 5, 6, 7};

  create(arr, 5);

  Display_r(first);
}