#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,temp,loc,min,a[100];
    setbuf(stdout,NULL);
    printf("Enter the size of An Array::");
    scanf("%d",&n);
    printf("Enter The Element Of An Array::\n");
    for ( i = 0; i < n; i++)
    {
        printf("Array[%d]::",i);
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
    printf("After The Sorting The Array\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
   return 0; 
}