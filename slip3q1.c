//sort random array using insertion sort
#include<stdio.h>
#include<conio.h>
#define MAX 20
void insersort(int a[],int n);
int main()
{
    int n,i,a[MAX];
    printf("Enter the size od An Array::");
    scanf("%d",&n);
    printf("Enter the Element of Array in Ascending Order::\n");
    for (i = 0; i < n; i++ )
    {
        printf("Array[%d]",i);
        scanf("%d",&a[i]);
    }
    insersort(a,n);
    printf("Elemets After Sorting::\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
        
    }
    
    
}
void insersort(int a[MAX],int n)
{
    int i,j,k;
    for ( i = 1; i < n; i++)
    {
        k=a[i];
        for (j = 1;(j>=0)&&(k<a[j]); j--)
        {
            a[j+1]=a[j];
            a[j]=k;
        }
        
    }
    
}
