//search element in array using linear search
#include<stdio.h>
#include<conio.h>
#define MAX 100
int linearsearch(int a[],int ,int);
int main()
{
    int n,i,key,position,a[MAX];
    printf("Enter Size of Array::");
    scanf("%d",&n);
    printf("Enter Elements Of An Array::\n");
    for ( i = 0; i < n; i++)
    {
        printf("Array[%d]::",i);
        scanf("%d",&a[i]);
    }
    printf("Enter The Element Want To Search::");
    scanf("%d",&key);
    position=linearsearch(a,n,key);
    if (position==-1)
    {
        printf(" %d Element Not Found",key);
    }
    else
    {
        printf("%d Found At %d Index",key,position);
    }
    
    
}
int linearsearch(int a[MAX],int n,int key)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        if (a[i]==key)
        {
            return i;
        }
        
    }
    return -1;
}