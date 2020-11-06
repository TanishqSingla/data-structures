#include "linkedList.h"

#define Node struct Node

//Reverse using array
void reverse1(Node *p)
{
    int *arr;
    Node *q = first;
    int i = 0;

    arr = (int *)malloc(sizeof(int) * count(p));
    while (q)
    {
        arr[i++] = q->data;
        q = q->next;
    }
    --i;
    q = p;
    while (q)
    {
        q->data = arr[i--];
        q = q->next;
    }
}

// Reverse by reversing links or using sliding pointer
void reverse2(Node *p)
{
    Node *q = NULL, *r = NULL;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void reverse_r(Node *p, Node *q)
{
    if (p)
    {
        reverse_r(p->next, p);
        p->next = q;
    }
    else
        first = q;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    create(arr, 5);

    reverse1(first);
    Display(first);

    printf("\n");

    reverse2(first);
    Display(first);

    printf("\n");

    reverse_r(first, NULL);
    Display(first);

    return 0;
}