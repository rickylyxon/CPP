#include <stdio.h>
int main()

{
    float result=0,a,b,c,d,e,f,g;
    printf ("Enter the value of a,b,c,d,e,f,g :-\n");
    scanf ("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g);
    result=((a+b/c*d-e)*(f-g));
    printf("The arithmetic expression is %f", result);
    return 0;
}