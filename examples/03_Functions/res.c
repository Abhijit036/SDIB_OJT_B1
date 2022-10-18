#include<stdio.h>
extern int results;
extern inline void disp();
int main()
{
    int a=10,b=20;
    printf("result=%d\n",result);
    add(a,b);
    printf("result=%d\n",result);
    mul(a,b);
    printf("result=%d\n",result);
    mul(a,b);
    printf("result=%d\n",result);
    disp(a,b);
}