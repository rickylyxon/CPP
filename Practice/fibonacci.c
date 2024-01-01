/*A Fibonacci sequence is defined as follows: the first
term and second term in the sequence are 0 and1.
Subsequent Terms are found by adding the preceding
two terms in sequence. Write a C program to generate
the first terms of the sequence?*/
#include<stdio.h>
int main()
{
    int f1,f2,n;
    printf("Enter the value of first term and second term");
    scanf("%d%d",&f1,&f2);
    printf("Enter how many term you want for the sequence");
    scanf("%d",&n);
    printf("%d\t%d",f1,f2);
    for (int i = 3; i <= n; i++)
    {
        int sum=0;
        sum=f1+f2;
        printf("\t%d",sum);
        f1=f2;f2=sum;
        
    }
    
    
    return 0;
}