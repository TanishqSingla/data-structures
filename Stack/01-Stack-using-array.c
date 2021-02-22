#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *s;
};

int main()
{
    struct stack st;
    printf("Enter size of stack ");
    scanf("%d", &st.size);
    st.s = (struct stack *)malloc(sizeof(int) * st.size);
    st.top = -1;
    return 0;
}