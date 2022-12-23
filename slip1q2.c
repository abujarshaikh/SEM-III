//sort thr elements of linked list using bbuble sort
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
}*start=NULL;
void createlink(int n);

int main()
{
    int n;
    printf("Enter total number of nodes::");
    scanf("%d",&n);
    createlink(n);
}
void createlink(int n)
{
    struct node *q,*temp;
    int d;
    printf("Enter data::\n");
    scanf("%d",&d);
    temp=malloc(sizeof(struct node));
    temp->info=d;
    temp->link=NULL;
    if (start==NULL)
    {
        start=temp;
    }
    else
    {
        q=start;
        while (q->link!=NULL)
        {
            q=q->link;
        }
        q->link=temp;
    }
    
    
}