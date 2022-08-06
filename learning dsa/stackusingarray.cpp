#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *s;
};
void create(struct stack *st)
{
    int size;
    printf("enter size:");
    scanf("%d", &size);
    st->size = size;
    st->top = -1;
    st->s = (int *)malloc(st->size * (sizeof(int)));
}
void display(struct stack st)
{
    for (int i = 0; i <= st.top; i++)
    {
        printf("%d", st.s[i]);
    }
}
void push(struct stack *st, int data)
{
    if (st->top == st->size - 1)
    {
        printf("Stack overflow");
    }
    else
    {
        st->top++;
        st->s[st->top] = data;
    }
}
void pop(struct stack *st)
{
    if (st->top == -1)
    {
        printf("stack underflow");
    }
    else
    {
        st->top--;
    }
}
int main()
{
    struct stack st;
    create(&st);
    push(&st, 10);
    push(&st, 10);
    push(&st, 10);
    push(&st, 10);
    display(st);
}