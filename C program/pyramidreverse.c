#include <stdio.h>
void main()
{
    int n,i,j;
    printf ("Enter how many term -");
    scanf ("%d",&n);
    for ( i = 1; i <=n ; i++)
    {
        for ( j =n+1-i ; j >= 1 ; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}