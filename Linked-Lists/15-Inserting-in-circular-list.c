#include "circularList.h"

void insert(Node *p, int index, int val)
{
    Node *temp;

    if (index < 0 || index > length(Head))
        return;

    if (index == 0)
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->data = val;
        if (Head == NULL) // If there is no element in the linked list
        {
            Head = temp;
            Head->next = Head;
        }
        else
        {
            while (p->next != Head)
                p = p->next;
            p->next = temp;
            temp->next = Head;
            Head = temp;
        }
    }
    else
    {
        for (int i = 0; i < index; i++)
            p = p->next;
        temp = (Node *)malloc(sizeof(Node));
        temp->data = val;

        temp->next = p->next;
        p->next = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 5};

    create(arr, 4);

    insert(Head, 2, 4);

    Display(Head);

    return 0;
}