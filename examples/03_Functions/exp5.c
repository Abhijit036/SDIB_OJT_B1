#include<stdio.h>
int a=10;
int b=20;
int main()
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
}