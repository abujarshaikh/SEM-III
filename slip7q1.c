#include <stdio.h>
void qvik_sort(int[], int, int);
void main()
{
    int low, high, i, n, a[100];
    printf("Enter The Size Of an Array:: ");
    scanf("%d", &n);
    printf("Enter The Elements Of An Array::\n");
    for (i = 0; i < n; i++)
    {
        printf("Array[%d]=", i);
        scanf("%d", &a[i]);
    }
    low = 0;
    high = n + 1;
    qvik_sort(a, low, high);
    printf("After The Sorting The Elements\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void qvik_sort(int a[], int low, int high)
{
    int pivot, i, j, t;
    if (low < high)
    {
        pivot = a[low];
        i = low + 1;
        j = high;
        while (i < j)
        {
            while (pivot >= a[i] && i <= high)
            {
                i++;
            }
            while (pivot < a[j] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        a[low] = a[j];
        a[j] = pivot;
        qvik_sort(a, low, j - 1);
        qvik_sort(a, j + 1, high);
    }
}