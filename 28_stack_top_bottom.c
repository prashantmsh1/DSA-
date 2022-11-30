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
int peek(struct stack *sp, int i)
{
    int arrayInd = sp->top - i+1 ;
    if (arrayInd < 0)
    {
        printf("Not a valid position for the stack");
        return -1;
    }
    else
    {
        return sp->arr[arrayInd];
    }
}
int stackTop(struct stack *sp){
    return sp->arr[sp->top];
}
int stackBottom(struct stack *sp)
{
    return sp->arr[0];
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully");
    printf("%d\n", isFull(sp));
    printf("%d\n", isEmpty(sp));
    push(sp, 1);
    push(sp, 2);
    push(sp, 3);
    push(sp, 5);
    push(sp, 16);
    push(sp, 22);
    push(sp, 22);
    printf("%d", sp->arr[sp->top]);
    printf("the value at index 3 is %d\n",peek(sp,3));
    printf("%d\n",sp->top);
    for (int  j = 1; j <= sp->top+1; j++)
    {
        printf("the value at index %d is %d\n",j,peek(sp,j));
    }
    printf("%d\n",stackTop(sp));
    printf("%d",stackBottom(sp)); //
    return 0;
}