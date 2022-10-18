#include<stdio.h>
#define BIG(x,y) (x>y) ? x:y
int main()
{
    int a,b,c;
    printf("\n Enter an integer:\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("\n Biggest of two number is :%d\n",BIG(BIG(a,b),c));
}