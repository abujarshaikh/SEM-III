/*#include<stdio.h>
//#include<cstack.h>
#define MAX 30
struct stack
{
    char a[MAX];
    int top;
};
void initc(struct stack * );
void pushc(struct stack *,char [],int);
char popc(struct stack * );
int isfullc(struct stack * );
int isempty(struct stack * );
#include<stdio.h>
#include<string.h>
//#include "cstack.h"
int reverse(struct stack *,char [],int);
int main()
{
    struct stack s;
    char ch[MAX],e;
    int n=0,i,p;
    initc(%s);
    printf("Enter A String To Push\n");
    gets(ch);

}*/
#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *stack;
int top = -1;
void push(char ele) // push function
{
    stack[++top] = ele;
}
char pop() // pop function
{
    return stack[top--];
}
int ispali(char str[])
{
    int length = strlen(str);
    stack = (char *)malloc(length * sizeof(char));
    int i, mid = length / 2;
    for (i = 0; i < mid; i++)
    {
        push(str[i]);
    }
    if (length % 2 != 0)
    {
        i++;
    }
    while (str[i] != '0')
    {
        char ele = pop();

        if (ele != str[i])
            return 0;
        i++;

        return 1;
    }
}
int main()
{
    char str[] = "team";//plzz enter the string
    if (ispali(str))
    {
        printf("YES IS IT PALANDROME");
    }
    else
    {
        printf("NO GIVEN STRING IS NOT A PALANDROME");
    }
    return 0;
}