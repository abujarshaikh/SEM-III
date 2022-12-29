#include <stdio.h>
#include <conio.h>
#define MAX 20
void insertion_sort(int a[MAX],int n)
{
    int i,j,k;
    //k=a[i];
    for ( i = 1; i < n; i++)
    {
        k=a[i];
        for (j = i-1; (j >=0)&&(k<a[j]); j--)
        {
            a[j+1]=a[j];
            a[j+1]=k;
        }
        
    }
    
}
void main()
{
    int a[MAX],n,i;
    printf("Enter how many elements want to sort::\n");
    scanf("%d",&n);
    printf("Enter the elements of array:: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
    printf("Elemets after sorting::\n");
    for ( i = 0; i < n ; i++)
    {
        printf("%d\t",a[i]);
    }
    
}
