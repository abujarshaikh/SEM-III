// linear search
#include <stdio.h>
#include<conio.h>
int linear_search(int a[], int, int);
int main()
{
    int a[100], n, i, k, position;
    printf("Enter how many elements you want\n");
    scanf("%d", &n);
    printf("Enter %d Elements of an array\n", n);
    for (i = 0; i < n; i++)
        scanf("%d\n", &a[i]);
    printf("Entered element to search\n");
    scanf("%d", &k);
    position = linear_search(a, n, k);
    if (position == -1)
    {
        printf("%d is not present in array.\n", k);
    }
    else
    {
        printf("%d is present in array at loction %d\n", k, position + 1);
    }

    /*printf("Result is %d at index %d\n",k,position);*/
    return 0;
}
int linear_search(int a[], int n, int k)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            return i;
        }
    }
    return -1;
}
// binary search
int main()
{
    int a[100],n,i,k,f,m,l;
    setbuf(stdout,NULL);
    printf("Enter the size of Array::");
    scanf("%d",&n);
    printf("Enter %d elements in Asscending Order::\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the value to be searched::");
    scanf("%d",&k);
    f=0;
    l=n-1;
    m=(f+l)/2;
    while (f<=l)
    {
        if(a[m]<k)
        f=m+1;
        else if(a[m]==k)
        {
            printf("Elements found at index %d\n",m);
            break;
        }
        else
        {
            l=m-1;
            m=(f+m)/2;
        }        
    }
    if (f>l)
    {
        printf("Element Not Found");
    }
   return 0; 
}
