#include <stdio.h>
#include<stdlib.h>
int main()
{
    struct Node
    {
        int data;
        struct Node *prev;
        struct Node *next;
    };
    struct Node *N1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *N2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *N3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *N4 = (struct Node *)malloc(sizeof(struct Node));
    // link Nodes
    N1->data = 5;
    N1->next = N2;
    N1->prev = NULL;

    N2->data = 6;
    N2->next = N3;
    N2->prev = N1;

    N3->data = 7;
    N3->next = N4;
    N3->prev = N2;

    N4->data = 56;
    N4->next = NULL;
    N4->prev = N3;
    // struct Node *p = N1->next;
    //or *p =N1;
    //while(p->next!=NULL)
    while (N1->next != NULL)
    {
        printf("%d ",N1->data );
        N1=N1->next;
    }

    return 0;
}