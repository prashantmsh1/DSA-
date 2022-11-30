#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct Node
    {
        int data;
        struct Node *next;
    } * head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    // allocate memory for the linked list in the heap
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    head = NULL;
    scanf("%d", &first->data);
    head = first;
    head->next=head;
    printf("the first node is %d", head->next->data);

    return 0;
}