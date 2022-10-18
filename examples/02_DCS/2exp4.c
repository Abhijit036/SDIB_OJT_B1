#include<stdio.h>
int main()
{
    int a=10,b=2;
    printf("\n Before if statement \n a =%d\t b =%d\n",a,b);
    if(a>b)
    {
        int temp=a;
        b=a;
        b=temp;

    }
}