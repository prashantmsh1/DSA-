#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *sp)
{
    if (sp->top == sp->size - 1)
    {
        return 1;
    }
    else
        return 0;
}
int isEmpty(struct stack *sp)
{
    if (sp->top == -1)
    {
        return 1;
    }
    else
        return 0;
}
void push(struct stack *sp, int value)
{
    if (isFull(sp))
    {
        printf("stack overflow");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = value;
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully");
    printf("%d\n", isFull(sp));
    printf("%d\n", isEmpty(sp));
    push(sp, 12);
    printf("%d", sp->arr[sp->top]);
    return 0;
}