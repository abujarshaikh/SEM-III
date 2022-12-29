#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    char data;
    struct node *next;
} *start;
void create()
{
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter Element::");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        q = start;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = temp;
    }
}
void del()
{
    struct node *temp, *p;
    int pos, t;
    printf("Enter The Position:");
    scanf("%d", &pos);
    t = 1;
    temp = start;
    if (pos == 1)
    {
        start = start->next;
        free(temp);
        printf("\nNode Deleted Successfully\n");
        return;
    }
    while (t < pos - 1)
    {
        temp = temp->next;
        t++;
    }
    p = temp->next;
    temp->next = p->next;
    free(p);
    printf("\nNode Deleted Successfully\n");
}
void display()
{
    struct node *temp;
    if (temp != NULL)
    {
        printf("The Linked List:\n");
        
        while (temp != NULL)
        {
            printf("%c->", temp->data);
            temp = temp->next;
        }
    
    }
    else
    {
        printf("List is empty");
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n1- Create A List\n2- Delete A Element\n3- Display List\n4- Exit\nEnter Your Choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
        case 4:
            exit(0);
        default:
            break;
        }
    }
}
/*#include <process.h>
void create();
void del();
void display();
struct node
{
    int info;
    struct node *link;
} *start = NULL;
int data;
int main()
{
    int n;
    setbuf(stdout, NULL);
    printf("\n1- Create A List\n2- Delete A Element\n3- Display List\n4- Exit\n");
    while (1)
    {
        printf("\nEnter Your Choice\n1- Create A List\n2- Delete A Element\n3- Display List\n4- Exit");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            create();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nPress The Correct Button Buddy!!");
        }
    }
    return 0;
}
void create()
{
    struct node *q, *temp;
    printf("Enter Element::");
    scanf("%d", &data);
    temp = malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        q = start;
        while (q->link != NULL)
        {
            q = q->link;
            q->link = temp;
        }
    }
}
void del()
{
    struct node *q, *temp;
    printf("Enter The Element To Be Dleted:: ");
    scanf("%d", &data);
    if (start->info == data)
    {
        temp = start;
        start = start->link;
        free(temp);
        display();
        return;
    }
    q = start;
    while (q->link->link != NULL)
    {
        if (q->link->info == data)
        {
            temp = q->link;
            q->link = temp->link;
            free(temp);
            display();
            return;
        }
        q = q->link;
    }
    if (q->link->info == data)
    {
        temp = q->link;
        q->link = NULL;
        free(temp);
        display();
        return;
    }
    printf("\n Element Not Found \n");
}
void display()
{
    struct node *q;
    if (start == NULL)
    {
        printf("List Is Empty !!\n");
    }
    else
    {
        printf("\t\tElements In List Are\n");
        q = start;
        while (q != NULL)
        {
            printf("%d\t", q->info);
            q = q->link;
        }
    }
}*/