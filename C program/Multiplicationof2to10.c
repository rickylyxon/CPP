#include <stdio.h>

int main ()
{
    int i,j,k;
        for ( i = 2; i <= 10; i++)
        {
            printf("Multiplication of %d\n", i );
                for ( j = 1; j <= 10; j++)
                {
                    k = i*j;
                    printf("%d * %d = %d\n", i,j,k );
                }
    
        }
    return 0;
}