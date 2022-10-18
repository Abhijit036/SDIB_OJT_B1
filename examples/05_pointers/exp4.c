#include<stdio.h>
int main()
{
    int *p;
    int a=100;
    p=&a;
    printf("adress of a is %p\n",&a);
    printf("value of p is %d\n",p);
    printf("address of p is %p\n",&p);
    printf("value of a is %d\n",a);    
}