//selection sort
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,loc,min,temp,a[100];
    printf("Enter The Size Of An Array::");
    scanf("%d",&n);
    printf("Enter The Elements Of Array\n");
    for ( i = 0; i < n; i++)
    {
        printf("Array[%d]=",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        min=a[i];
        loc=i;
        for ( j = i+1; j < n; j++)
        {
            if (min>a[j])
            {
                min=a[j];
                loc=j;
            }
            
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
   printf("Elements After The Sorting\n");
   for ( i = 0; i < n; i++)
   {
    printf("%d\t",a[i]);
   }
  return 0;  
}
