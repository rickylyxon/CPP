#include<stdio.h>

void bubble_sort(int ar[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int flag=0;
        for (int j = 0; j < n-1-i; j++)
        {
            if (ar[j]>ar[j+1])
            {
                int temp= ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
                flag=1;
            }   
        }
        if (flag==0)
        {
            break;
        }   
    }
}

void main()
{
    int n;
    printf("Enter how many element you want\n");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of the element in [%d]",i);
        scanf("%d",&ar[i]);
    }
    bubble_sort(ar,n);
    printf("The sorted values are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",ar[i]);
    }
    
}