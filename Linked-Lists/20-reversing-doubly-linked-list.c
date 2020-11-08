#include "double_linked_list.h"

void reverse(Node *p)
{
  Node *temp;

  while (p)
  {
    temp = p->next;
    p->next = p->prev;
    p->prev = temp;
    p = p->prev;
    if (p != NULL && p->next == NULL)
      first = p;
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};

  create(arr, 5);

  reverse(first);

  Display(first);

  return 0;
}