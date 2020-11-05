//Maximum value in a linked list

#include "linkedList.h"
#include <limits.h>

#define Node struct Node

int max(Node *p)
{
    int m = p->data;

    while (p)
    {
        if (p->data > m)
            m = p->data;
        else
            p = p->next;
    }
    return m;
}

int main()
{

    int arr[] = {1, 2, 67, 4, 5};

    create(arr, 5);

    printf("Maximum element is %d", max(first));

    return 0;
}