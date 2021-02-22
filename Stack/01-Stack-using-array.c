#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *s;
};

void create(struct Stack *st)
{
    printf("Enter size ");
    scanf("%d", &st->size);
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));
}

void display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
        printf("%d ", st.s[i]);
    printf("\n");
}

void push(struct Stack *st, int val)
{
    if (st->top == st->size - 1)
        printf("Stack Overflow\n");
    else
    {
        st->top++;
        st->s[st->top] = val;
    }
}

int pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        x = st->s[st->top--];
    }
    return x;
}

int main()
{
    struct Stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    display(st);

    printf("%d\n", pop(&st));

    display(st);

    return 0;
}