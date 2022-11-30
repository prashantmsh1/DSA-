#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
// case 1: insertion at first
struct Node *insertatFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->next = head;
    ptr->data = data;

    return ptr;
};
//insert at end
struct Node *insertatEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL; 

    return head; //
};
// case 1: insertion at index
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
//insert after node
struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    
    return head;
}


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
    // int data;
    // printf("enter the data that you want to enter at first\n");
    // scanf("%d",&data);
    // head =insertatFirst(head,data);
    // // LinkedListTraversal(head);
    // printf("enter the index and value");
    int index, value;
    scanf("%d %d", &index, &value);
    head = insertAtIndex(head, value, index);
    LinkedListTraversal(head);

    // head = insertatEnd(head, 56);
    // LinkedListTraversal(head);
    // head=insertAfterNode(head,third,45);
    // LinkedListTraversal(head);
    return 0;
}