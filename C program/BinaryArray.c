//program to implement Binary search
#include<stdio.h>
int main()
{
    int num[100],n,i,j,temp,key,low,mid,high;

    printf("Enter no. of elements:");
    scanf("%d",&n);

    printf("\nEnter the values of the array\n");

    for(i=0;i<n;i++)
    {
        printf("Enter element[%d]",i);
        scanf("%d",&num[i]);

    }       
    printf("Before sorting\n");
    for ( i = 0; i < n; i++)
    {

        printf("%d\t",num[i]);
    }
    
for ( i = 0; i < n-1; i++)
{
    for ( j = 0; j < n-i-1; j++)
    {
        if (num[j]>=num[j+1])
        {
            temp = num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
        }
    }
}
    printf("\nAfter sorting\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",num[i]);
    }
    
    printf("\nEnter elements to be searched:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while (low<=high)
    {
        mid = (low+high)/2;
        if (num[mid]==key)
        {
            printf("%d is found at %d", key, mid);
            break;
        }
        else if (num[mid] < key)
            low = mid+1;
        else
            high = mid-1;
    }
    if (low>high)
        printf("%dis not found", key);
}