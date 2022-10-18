#include<stdio.h>
int main()
{
    int a[7]={1,2,3,4,5,6,7}, *p;
    printf("%d\n",*(p+5));
    printf("%d\n",p+3);
    printf("%d\n",(p+5) - (p+3));
    printf("%d",*(a+5));
}