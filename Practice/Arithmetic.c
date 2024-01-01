#include<stdio.h>

int main(){
    float a,b,c,d,e,f,g;
    printf("Enter the value of a,b,c,d,e,f,g\n");
    scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g);
    float result=0;
    result=((a+b/c*d-e)*(f-g));
    printf("The arithmatic expression of ((a+b/c*d-e)*(f-g)) is = %f",result);
    return 0;
}