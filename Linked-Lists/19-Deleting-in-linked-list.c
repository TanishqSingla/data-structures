#include "double_linked_list.h"

void delete (Node *p, int index)
{

  Node *q = NULL;

  if (index == 0)
  {
    first = p->next;
    free(p);
    first->prev = NULL;
  }
  else
  {
    for (int i = 0; i < index; i++)
    {
    }
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};

  create(arr, 5);

  delete (first, 0);

  Display(first);

  return 0;
}