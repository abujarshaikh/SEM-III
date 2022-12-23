#include<stdio.h>
#include<stdlib.h>
 
struct node
{
    char data;
    struct node *next;
}*start;
 
void create()
{
    struct node *temp,*q;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the character:");
    scanf(" %c",&temp->data);
    temp->next=NULL;
 
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
    }
}
void display()
{
    struct node *temp;
    printf("The Linked List : \n");
    temp=start;
    while(temp!=NULL)
    {
        printf("%c->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
#include<stdio.h>
//#include "sll.h"
int main()
{
    int ch;
    start=NULL;
    while(1)
    {
        printf("\n1.Create\n");
        //printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();  break;
            //case 2:delete();  break;            
            case 3:display(); break;
            case 4:exit(0);
        }
    }
}