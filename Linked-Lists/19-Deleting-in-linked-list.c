#include "double_linked_list.h"

void delete (Node *p, int index)
{
  if (index == 0)
  {
    first = first->next;
    if (first)
      first->prev = NULL;
    free(p);
  }
  else
  {
    for (int i = 0; i < index; i++)
      p = p->next;
    p->prev->next = p->next;
    if (p->next)
      p->next->prev = p->prev;
    free(p);
  }
}

int main()
{
  int arr[] = {1, 2, 3, 3, 5};

  create(arr, 5);

  delete (first, 3);

  Display(first);

  return 0;
}