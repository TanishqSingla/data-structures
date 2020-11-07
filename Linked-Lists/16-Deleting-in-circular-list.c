#include "circularList.h"

void Delete(Node *p, int index)
{

    Node *q = NULL;

    if (index < 0 || index > length(Head))
        return;
    if (index == 0)
    {
        do
        {
            q = p;
            p = p->next;
        } while (p != Head);
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