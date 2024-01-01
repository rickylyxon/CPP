#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char num[100];
    printf (" \n Enter a string to be reversed: ");  
    scanf ("%s", &num);
    printf (" \n After the reverse of a string: %s ", strrev(num));  
    return 0;  
}