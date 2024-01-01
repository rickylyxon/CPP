#include<stdio.h>

void selection_sort(int ar[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ar[j]<ar[i])
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
}

int main(){
    int n;
    printf("enter how many elements you want to add ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the values of the elements \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of the elements in [%d]",i);
        scanf("%d",&ar[i]);
    }
    selection_sort(ar,n);
    printf("The sorted elements are ");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",ar[i]);
    }
    return 0;
}