#include<stdio.h>
#include<stdlib.h>
struct node
{
    int id;
    char grade[5];
    struct node *next;
};
void traversal(struct node* ptr){
    while (ptr!=NULL)
    {
        printf("%d %s\n",ptr->id,ptr->grade);
        ptr=ptr->next;
    }
    
}



int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
printf("\n");


head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));
fifth=(struct node*)malloc(sizeof(struct node));

printf("Enter the head:- ");
scanf("%d %s",&head->id,&head->grade);
head->next=second;

printf("Enter the second:- ");
scanf("%d %s",&second->id,&second->grade);
second->next=third;

printf("Enter the third:- ");
scanf("%d %s",&third->id,&third->grade);
third->next=fourth;

printf("Enter the fourth:- ");
scanf("%d %s",&fourth->id,&fourth->grade);
fourth->next=fifth;

printf("Enter the fifth:- ");
scanf("%d %s",&fifth->id,&fifth->grade);
fifth->next=NULL;

printf("\n");
traversal(head);
return 0;
}