#include<stdio.h>

void insertion_sort(int ar[],int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp=ar[i];
        int j=i-1;
        while (j>=0&&ar[j]>temp)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=temp;
    }
    
}

void main()
{
    printf("Enter how many element you want");
    int n;
    scanf("%d",&n);
    int ar[n];
    printf("Enter the element\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of the element in [%d]",i);
        scanf("%d",&ar[i]);
    }
    
    insertion_sort(ar,n);

    printf("Sorted array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",ar[i]);
    }
    
    
}