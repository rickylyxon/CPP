#include<stdio.h>

void selection_sort(int ar[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++)
        {
            if (ar[j]<ar[min])
            {
                min=j;
            }
            
        }
        int temp= ar[min];
        ar[min]=ar[i];
        ar[i]=temp;
    }
}

void main()
{
    printf("Enter how many element you want");
    int n;
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of the elements[%d]",i);
        scanf("%d",&ar[i]);
    }
    selection_sort(ar,n);
    printf("sorted array");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",ar[i]);
    }
}