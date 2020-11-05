//Sum of all elments of a linked list

#include "linkedList.h"

int sum(struct Node *p)
{
  int sum = 0;

  while (p)
  {
    sum += p->data;
    p = p->next;
  }

  return sum;
}

int sum_r(struct Node *p)
{
  if (p == NULL)
    return 0;
  else
    return sum_r(p->next) + p->data;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};

  create(arr, 5);

  printf("Sum of all elements is %d\n", sum(first));
  printf("Sum of all elements is %d", sum_r(first));

  return 0;
}