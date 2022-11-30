#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    // allocate memory for the linked list in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    // link first and second node
    head->data = 7;
    head->next = second;
    // link second and third node
    second->data = 11;
    second->next = third;
    // link second and third node
    third->data = 55;
    third->next = fourth;
    // terminate the list at third node
    fourth->data = 18;
    fourth->next = NULL;
    LinkedListTraversal(head);

    return 0;
}