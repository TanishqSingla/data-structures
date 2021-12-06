#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
}top = NULL;

void push(int val) {
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;
}

int pop() {
    struct Node* temp;
    if(top == NULL) {
        printf("Stack is empty\n");
    } else {
        temp = top;
        top = top->next;
    }
}

int main() {
    return 0;
}