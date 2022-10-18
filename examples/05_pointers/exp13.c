#include<stdio.h>
int add(int a, int b);
int sub(int a , int b);
int mul(int a, int b);
int div(int a ,int b);
int  (*fnptr)(int a, int b);
int add(int a, int b)
{
return a+b;
}
int sub(int a , int b)
{
return (a-b);
}
int mul(int a, int b)
{
return(a*b);
}
int div(int a ,int b)
{
return (a/b);
}
int main()
{
int i;
int  (*fnptr)(int a, int b);
fnptr=add;
i=fnptr(5,10);
printf("%d\n",i);
fnptr=sub;
i=fnptr(5,10);
printf("%d\n",i);
fnptr=mul;
i=fnptr(5,10);
printf("%d\n",i);
fnptr=div;
i=fnptr(5,10);
printf("%d\n",i);
}