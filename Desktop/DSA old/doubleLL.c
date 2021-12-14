#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prevptr;
    int data;
    struct node *nextptr;
};
void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->prevptr;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node *));
    second = (struct node *)malloc(sizeof(struct node *));
    third = (struct node *)malloc(sizeof(struct node *));
    fourth = (struct node *)malloc(sizeof(struct node *));

    head->prevptr=NULL;
    head->data = 7;
    head->nextptr = second;
    
    second->prevptr=head;
    second->data = 11;
    second->nextptr = third;

    third->prevptr=second;
    third->data = 37;
    third->nextptr = fourth;
    
    fourth->prevptr=third;
    fourth->data = 65;
    fourth->nextptr = NULL;

    linkedlisttraversal(fourth);
    return 0;
}
