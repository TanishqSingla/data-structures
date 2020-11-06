#include "linkedList.h"

#define Node struct Node

void is_sorted(Node *p)
{
    int val = p->data;
    while (p)
    {
        if (p->data < val)
        {

            printf("List is not sorted");
            return;
        }
        val = p->data;
        p = p->next;
    }
    printf("List is sorted");
}

int main()
{
    int arr[] = {1, 2, 6, 4, 5};
    create(arr, 5);

    is_sorted(first);

    return 0;
}