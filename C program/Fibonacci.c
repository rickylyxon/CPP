#include <stdio.h>
int main()
{
    int f1=0, f2=1, sum, i,n;
    printf("Enter how many terms :");
    scanf("%d",&n);
    printf("The fibonacci series are as follow:");
    printf("\n %d \t %d", f1,f2);
    for ( i = 3; i <=n ; i++)
    {
        sum= f1+f2;
        printf("\t %d",sum);
        f1=f2;
        f2=sum;
    }

    return 0;
}