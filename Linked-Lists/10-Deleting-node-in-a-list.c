#include "linkedList.h"

#define Node struct Node

void delete_node(Node *p, int index)
{
    Node *q = NULL;

    if (index < 1 || index > count(p))
        return;
    else
    {
        if (index == 1)
            first = first->next;
        else
        {
            for (int i = 0; i < index - 1; i++)
            {
                q = p;
                p = p->next;
            }
            q->next = p->next;
            free(p);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    create(arr, 5);

    delete_node(first, 1);

    Display(first);

    return 0;
}