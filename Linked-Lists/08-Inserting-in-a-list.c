#include "linkedList.h"

#define Node struct Node

void insert(Node *p, int index, int x)
{

    if (index < 0 || index > count(p))
        return;

    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = x;

    if (index == 0)
    {
        temp->next = first;
        first = temp;
    }
    else
    {
        for (int i = 0; i < index; i++)
            p = p->next;
        temp->next = p->next;
        p->next = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 5};

    create(arr, 4);

    insert(first, 2, 4);

    Display(first);

    return 0;
}