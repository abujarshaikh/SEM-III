// linear search
#include <stdio.h>
#include <conio.h>
int linear_search(int a[], int, int);
int main()
{
    int a[100], n, i, k, position;
    printf("Enter how many elements you want::");
    scanf("%d", &n);
    printf("Enter %d Elements of an array::\n", n);
    for (i = 0; i < n; i++)
    {
        printf("ARRAY[%d]",i);
        scanf("%d\n", &a[i]);
    }
    printf("\nEntered element to search::");
    scanf("%d", &k);
    position = linear_search(a, n, k);
    if (position == -1)
    {
        printf("\n%d is not present in array.\n", k);
    }
    else
    {
        printf("\n%d is present in array at loction %d\n", k, position + 1);
    }
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