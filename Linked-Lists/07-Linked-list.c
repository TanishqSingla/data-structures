// Searching in a linked list
#include "linkedList.h"

#define Node struct Node

Node *search(Node *p, int key)
{
    while (p)
    {
        if (key == p->data)
            return p;
        p = p->next;
    }
    return NULL;
}

Node *search_r(Node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    return search_r(p->next, key);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    create(arr, 5);

    Node *temp = search(first, 3);

    if (temp)
    {
        printf("Key is found %d", temp->data);
    }
    else
    {
        printf("Key is not found");
    }

    return 0;
}