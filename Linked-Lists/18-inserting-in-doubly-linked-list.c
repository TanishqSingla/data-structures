#include "double_linked_list.h"

void insert(Node *p, int index, int val)
{
    Node *q = NULL;

    if (index < 0 || index > length(p))
        return;
    if (index == 0)
    {
        Node *temp = (Node *)malloc(sizeof(Node));
        temp->data = val;
        temp->prev = p->prev;
        p->prev = temp;
        temp->next = p;
        first = temp;
    }
    else
    {
        for (int i = 0; i < index; i++)
        {
            q = p;
            p = p->next;
        }

        Node *temp = (Node *)malloc(sizeof(Node));
        temp->data = val;

        q->next = temp;
        temp->next = p;
        p->prev = temp;
        temp->prev = q;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 5};

    create(arr, 4);

    insert(first, 0, 4);

    Display(first);

    return 0;
}