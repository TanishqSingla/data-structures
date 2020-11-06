#include <stdio.h>
#include <stdlib.h>

#define Node struct Node

Node
{
    int data;
    Node *next;
}
*Head;

void create(int arr[], int n)
{
    int i;
    Node *temp;
    Head = (Node *)malloc(sizeof(Node));
    Head->data = arr[0];
    Head->next = Head;

    Node *last = Head;

    for (int i = 1; i < n; i++)
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->data = arr[i];
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

void Display(Node *h)
{
    do
    {
        printf("%d ", h->data);
        h = h->next;
    } while (h != Head);
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    create(arr, 5);

    Display(Head);

    return 0;
}