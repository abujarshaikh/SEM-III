//sum of array elements
#include <stdio.h>
int main()
{
    int i, size, sum = 0;
    printf("\t\t***Abujar Shaikh***");
    printf("\n\nEnter size of array\n");
    scanf("%d", &size);
    int a[size];
    printf("\nEnter elements of array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("\nsum of elements is=%d\n", sum);
    return 0;
}