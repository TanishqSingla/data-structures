#include "linkedList.h"

#define Node struct Node

void remove_duplicate()
{
}

//for sorted
void remove_duplicate_s(Node *p)
{
    Node *q = p->next;

    while (q)
    {
        if (p->data == q->data)
        {
            p->next = q->next;
            free(q);
            q = p->next;
        }
        else
        {
            q = q->next;
            p = p->next;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 3, 5};
    create(arr, 5);

    remove_duplicate_s(first);
    Display(first);
    return 0;
}