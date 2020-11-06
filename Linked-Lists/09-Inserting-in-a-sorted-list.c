#include "linkedList.h"

#define Node struct Node

void sorted_insert(Node *p, int val)
{
    Node *temp, *q = NULL;

    temp = (Node *)malloc(sizeof(Node));
    temp->data = val;
    temp->next = NULL;

    if (first == NULL)
        first = temp;
    else
    {
        while (p && p->data < val)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            temp->next = first;
            first = temp;
        }
        else
        {
            temp->next = q->next;
            q->next = temp;
        }
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};

    create(arr, 5);

    sorted_insert(first, 25);

    Display(first);

    return 0;
}