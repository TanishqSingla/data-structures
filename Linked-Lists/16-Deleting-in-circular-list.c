#include "circularList.h"

void Delete(Node *p, int index)
{

    Node *q = NULL;

    if (index < 0 || index > length(Head))
        return;
    if (index == 0)
    {
        while (p->next != Head)
            p = p->next;
        if (Head == p) // if the head is the only node
        {
            free(Head);
            Head = NULL;
        }
        else
        {
            p->next = Head->next;
            free(Head);
            Head = p->next;
        }
    }
    else
    {
        for (int i = 0; i < index; i++)
        {
            q = p;
            p = p->next;
        }

        q->next = p->next;
        free(p);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    create(arr, 5);

    Delete(Head, 0);

    Display(Head);

    return 0;
}