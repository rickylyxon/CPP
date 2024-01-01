#include<stdio.h>

void insertion_sort(int ar[],int n){
    for (int i = 1; i < n; i++)
    {
        int current=ar[i];
        int j=i-1;
        while (ar[j]>current&&j>=0)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=current;
    }
    
}
int main(){
    int n;
    printf("Enter how many element you wamt");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the value of elements");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of the elements [%d]",i);
        scanf("%d",&ar[i]);
    }
    
    insertion_sort(ar,n);
    
    printf("The sorted elements are");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",ar[i]);
    }
    return 0;
}