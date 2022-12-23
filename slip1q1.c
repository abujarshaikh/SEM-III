//menu driven program to call the oeration on linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *next,*prev;
}*start;
 
void create()
{
    struct node *temp,*q;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter a character:");
    scanf(" %c",&temp->data);
    temp->next=NULL;
    temp->prev=NULL;
 
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        q=start;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=temp;
        temp->prev=q;
    }
}
 
 
void display()
{
    struct node *temp;
    if(start==NULL)
    {
        printf("\nLinked List is empty\n");
        return;
    }
    printf("The Linked List:\n");
    temp=start;
    while(temp!=NULL)
    {
 
        printf("%d<-%c->%d->|",temp->prev,temp->data,temp->next);
        temp=temp->next;
    }
}
#include<stdio.h>
//#include "dll.h"
void main()
{
    int c;
    start=NULL;
    while(1)
    {
        printf("\n1.Create\n");
        //printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:create();  break;
            //case 2:delete();  break;
            case 3:display(); break;
            case 4:exit(0);
        }
    }
    
}