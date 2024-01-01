#include<stdio.h>

void bubble_sort(int ar[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int flag=0;
        for (int j = 0; j < n-1-i; j++)
        {
            if (ar[j]>ar[j+1])
            {
                int temp= ar[j+1];
                ar[j+1]=ar[j];
                ar[j]=temp;
                flag=1;
            }
            
        }
        if (flag==0)
        {
            break;
        }
    }
}
void insertion_sort(int ar[],int n){
    for (int i = 1; i < n; i++)
    {
        int current= ar[i];
        int j= i-1;
        while (ar[j]>current&&j>=0)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=current;   
    }   
}

void selection_sort(int ar[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ar[i]>ar[j])
            {
            int temp= ar[j];
            ar[j]=ar[i];
            ar[i]=temp;
                
            }
        }
    }
}
int partition(int ar[], int low ,int high){
    int pivot=ar[high];
    int i=low-1;
    for (int j = low; j < high; j++)
    {
        if (ar[j]<pivot)
        {
            i++;
            int temp=ar[i];
            ar[i]=ar[j];
            ar[j]= temp;
        }
        
    }
    i++;
    int temp=ar[i];
    ar[i]=ar[high];
    ar[high]=temp;
    return i;
}

void quick_sort(int ar[],int low, int high){
    if (low<high)
    {
        int pidex = partition(ar, low , high);

        quick_sort(ar,low,pidex-1);
        quick_sort(ar, pidex+1, high);
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
    quick_sort(ar,0,n-1);
    printf("The sorted elements are ");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",ar[i]);
    }
    return 0;
}