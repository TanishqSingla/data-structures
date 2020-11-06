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