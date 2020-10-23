#include "linkedList.h"

int count(struct Node *p)
{
  int count = 0;
  while (p)
  {
    count++;
    p = p->next;
  }
  return count;
}

int count_r(struct Node *p)
{
  if (!p)
    return 0;
  return count_r(p->next) + 1;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};

  create(arr, 5);

  printf("Number of elements are %d\n", count(first));
  printf("Number of elements are %d", count_r(first));
  return 0;
}