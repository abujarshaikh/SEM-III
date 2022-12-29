#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void insert_by_priority(int);
void delete_by_priority(int);
void check(int);
void create();
void display_prequeue();
int pri_que[MAX];
int front, rear;
void main()
{
    int n, ch;
    printf("\n1 - Insert An Element To The Queue");
    printf("\n2 - Delete An Element From The Queue");
    create();
    while (1)
    {
        printf("\nEnter Your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter Value To be Inserted:: ");
            scanf("%d", &n);
            insert_by_priority(n);
            break;
        case 2:
            printf("Enter The Value To Delete:: ");
            scanf("%d", &n);
            delete_by_priority(n);
        case 3:
            display_prequeue();
        case 4:
            exit(0);
        default:
            printf("\n You Press The Wrong Button, Will You Please Press The Right On");
            
        }
    }
}
void create()
{
    front = rear - 1;
}
void insert_by_priority(int data)
{
    if (rear >= MAX - 1)
    {
        printf("\nQueue is Overflow No More Elemet Can be Inserted");
        return;
    }
    if ((front == -1) && (rear == -1))
    {
        front++;
        rear++;
        pri_que[rear] = data;
        return;
    }
    else
    {
        check(data);
        rear++;
    }
}
void check(int data)
{
    int i, j;
    for (i = 0; i <= rear; i++)
    {
        if (data >= pri_que[i])
        {
            for (j = rear + 1; j > i; j--)
            {
                pri_que[j] = pri_que[j - 1];
            }
            pri_que[i] = data;
            return;
        }
    }
    pri_que[i] = data;
}
void delete_by_priority(int data)
{
    int i;
    if ((front == -1) && (rear == -1))
    {
        printf("OOPS Queue Is Empty No Element Found To Delete");
        return;
    }
    for (i = 0; i <= rear; i++)
    {
        if (data == pri_que[i])
        {
            for (; i < rear; i++)
            {
                pri_que[i] = pri_que[i + 1];
            }
            pri_que[i] = -99;
            rear--;
            if (rear == -1)
            {
                front == -1;
                return;
            }
        }
    }
    printf("\n%d Not Found In Queue To Delete", data);
}
void display_prequeue()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is Empty");
        return;
    }
    for (; front <= rear; front++)
    {
        printf(" %d ", pri_que[front]);
    }
    front = 0;
}
