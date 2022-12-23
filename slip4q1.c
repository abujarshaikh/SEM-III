//sortnig elements of array using bubble sort
#include <stdio.h>
#include <conio.h>
#define MAX 100
void bubblesort(int a[], int);
void display(int a[], int);
int main()
{
    int i, n, a[MAX];
    printf("Enter the Size of Array::");
    scanf("%d", &n);
    printf("Elements Of Array In Acsending Order::\n");
    for (i = 0; i < n; i++)
    {
        printf("Array[%d]::", i);
        scanf("%d", &a[i]);
    }
    bubblesort(a, n);
    printf("Elemets Afer Sorting::\n");
    display(a, n);
}
void bubblesort(int a[MAX],int n)
{
    int i,j,k;
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j<n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                a[j+1]=a[j];
                a[j]=k;
                k=a[j+1];
            }
            
        }
        
        
    }
    
}
void display(int a[MAX],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
}
