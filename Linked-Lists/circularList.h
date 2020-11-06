#include <stdio.h>
#include <stdlib.h>

#define Node struct Node

Node
{
    int data;
    Node *next;
}
*Head;

void create()
{
}

void Display(Node *h)
{
    do
    {
        printf("%d ", h->data);
        h = h->next;
    } while (h != Head);
}

int length(Node *p)
{
    int length = 0;
    do
    {
        p = p->next;
        length++;
    } while (p != Head);
    return length;
}