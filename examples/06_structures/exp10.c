#include<stdio.h>
struct Arith
{
    int a,b;
    int (*fnptr)(int,int);
};
int addition(int x, int y)
{
    return x+y;
}
int subtraction(int x, int y)
{
    return x-y;
}
int main()
{
    struct Arith add,sub;
    printf("print values of a and b are :");
    scanf("%d %d",&add.a,&add.b);
    sub=add;
    add.fnptr=addition;
    sub.fnptr=subtraction;
    printf("%d\n",add.fnptr(add.a,add.b));
    printf("%d\n",sub.fnptr(sub.a ,sub.b));
}