#include<stdio.h>
int main()
{
    int num[100],n,i,key;

    printf("Enter no of elements:");
    scanf("%d",&n);

    printf("\nEnter the values of the array\n");

    for(i=0;i<n;i++)
    {
        printf("Enter element[%d]",i);
        scanf("%d",&num[i]);

    }

    printf("Enter elements to be searched:");
    scanf("%d",&key);

    if(key==num[i])
    {
        printf("Element found");
    }
    else
    {
        printf("Element Not Found");
    }
    return 0;
}
