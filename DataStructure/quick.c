#include<stdio.h>

int partition(int ar[],int low ,int high){
    int pivot=ar[high];
    int i=low-1;
    for (int j =low; j < high; j++)
    {
        if(ar[j]<pivot){
            i++;
            int temp= ar[i];
            ar[i]=ar[j];
            ar[j]=temp; 
        }
    }
    i++;
    int temp=ar[i];
    ar[i]=pivot;
    ar[high]=temp;
    return i;
    
}
void quick_sort(int ar[], int low, int high){
    if (low<high)
    {
        int pidx = partition(ar,low, high);

        quick_sort(ar,low, pidx-1);
        quick_sort(ar, pidx+1,high);
    }
    
}

int main(){
    int n;
    printf("Enter thoe many elements you want to add ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the values of the elements \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the values of the elements in [%d]",i);
        scanf("%d",&ar[i]);
    }
    
    quick_sort(ar,0,n-1);
    printf("The sorted elements are \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",ar[i]);
    }
    return 0;
}