#include <stdio.h>
void main()
{
    int n,i,j,k,l,m;
    printf ("Enter the value of n-");
    scanf ("%d",&n);
    for ( i = 1; i <=n ; i++)
    {
        for ( j = 1 ; j <= (n-i) ; j++)
        {
            printf(" ");
        }
        for ( k = 1; k <= i; k++)
        {
            printf("%d",k);
        }
        for ( l = 1; l <= (n-j) ; l++)
        {
            m=(i-l);
            printf("%d",m);
        }
        printf ("\n");
    }
}