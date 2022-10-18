//swapping two number
#include<stdio.h>
int main()
{
    int a=5;
    int b=6;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the two numbers are : %d %d",a,b);
}