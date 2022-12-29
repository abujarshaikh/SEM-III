#include<stdio.h>
#include<conio.h>
int stack[100],x,n,top,i,choice;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("Enter the size of Stack:: ");
    scanf("%d",&n);
    printf("\n1-Push\n2-Pop\n3-Display\n4-Exit");
    do
    {
        printf("\nEnter The Choice:: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
        display();
        break;
        case 4:
            printf("\n These Is Exit Point");
            break;
        default:
        printf("Please Enter Valid Number");
            
        }
} while (choice!=4);
return 0;
    
}
void push()
{
    if (top>=n-1)
    {
        printf("\nStack Is Overflow");
    }
    else
    {
        printf("Enter The Value TO be Pushed:: ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
    
}
void pop()
{
    if (top<=-1)
    {
        printf("Stack I Underflow");
    }
    else
    {
        printf("\nThe Poped Element is %d",stack[top]);
        top--;
    }
    
    
}
void display()
{
    if (top>=0)
    {
        printf("The Elements In A Stack Are\n");
        for ( i = top  ; i >=0; i--)
        {
            printf("\n%d",stack[i]);
            printf("\nPress Next Choice Please:: ");

        }
                
    }
    else
        {
            printf("The Stack Is Empty");
        }
}