// binary search
#include<stdio.h>
#include<conio.h>
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
