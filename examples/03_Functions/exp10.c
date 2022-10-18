//swap
#include<stdio.h>
void swap(int,int);
int a,b;
int main()
{
    a=10;
    b=20;
    printf("before %d %d\n",a,b);
    swap(a,b);
    printf("after  %d %d\n",a,b);
    return 0;
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf(" %d %d\n",a,b);
    return;
}
