#include <stdio.h>
#include <conio.h>
#define MAX 100
void bubble_sort(int a[MAX], int n);
void display(int a[MAX], int n);
void main()
{
    int a[MAX], n, i;
    printf("Enter The Size Of An Array:: ");
    scanf("%d", &n);
    printf("Enter The Elements Of An Array\n");
    for (i = 0; i < n; i++)
    {
        printf("Array[%d]= ", i);
        scanf("%d", &a[i]);
    }
    bubble_sort(a, n);
    display(a, n);
}
void bubble_sort(int a[MAX], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void display(int a[MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}