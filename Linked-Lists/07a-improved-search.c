// Improving search using move to head

/* 
    Since this is a single linked lsit,
    transposition cannot be done, since you cannot swap the address nodes pointing, 
    what you can do is make the previous point the next of the current node and make your current node as first node
*/

#include "linkedList.h"

#define Node struct Node

Node *search(Node *p, int key)
{
    Node *q = NULL;
    while (p)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    create(arr, 5);

    Node *temp = search(first, 4);

    if (temp)
        printf("Key found %d", temp->data);
    else
        printf("Key not found");

    return 0;
}