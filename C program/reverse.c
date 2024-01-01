#include <stdio.h>
#include <conio.h>
int main()
{
    int n ,reverse=0 ,remainder ;
    printf ("Enter the value that you want to reverse-");
    scanf("%d",&n);
    while (n!=0)
    {
        remainder = n % 10 ;
        reverse = reverse * 10 + remainder ;
        n/=10;
    }
    printf("The reverse value of the given number is %d",reverse);
    getch();
    return 0;
}