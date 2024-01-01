#include<stdio.h>
int main()
{
    int num[100],n,i,j,temp,key,low,mid,high;
    printf("Enter how many element ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the value of the element in [%d] - ",i);
        scanf("%d",&num[i]);
    }
    printf("Before sorting\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",num[i]);
    }
    for ( i = 0; i < n; i++)
    { 
        for ( j = 0; j < n-i-1; j++)
        {
            if (num[j]>=num[j+1])
            {
            temp=num[j+1];
            num[j+1]=num[j];
            num[j]=temp;
            }
        }
    }
    printf("\nAfter sorting\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",num[i]);
    }
    printf("\nEnter the number you want to be searched ");
    scanf("%d",&key);
    low = 0;
    high=n-1;
    while (high>=low)
    {
    mid=(low+high)/2;
    if (num[mid]==key)
    {
        printf("%d is found at %d",key,mid);
        break;
    }
    else if (num[mid]>key)
    {
        high=mid-1;
    }
    else if (num[mid]<key)
    {
        low=mid+1;
    }
    }
    if (low >=high)
    {
        printf("%d is not found",key);
    }
    
    

    return 0; 
}