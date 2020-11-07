#include <stdio.h>
#include <stdlib.h>

#define Node struct Node

Node
{
    Node *prev;
    int data;
    Node *next;
}
*first = NULL;

void create(int arr[], int n)
{
    Node *temp, *last;

    first = (Node *)malloc(sizeof(Node));
    first->data = arr[0];
    first->prev = first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->data = arr[i];
        temp->next = last->next;
        temp->prev = last;
        last->next = temp;
        last = temp;
    }
}

void Display(Node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int length(Node *p)
{
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}