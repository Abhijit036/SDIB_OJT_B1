#include<stdio.h>
int main()
{
    int a =50;
    int b =5;
    int result = 0;
    result = a & b;
    printf("result is %d\n",result);
    result = a ^ b;
    printf("result is %d\n",result);
    result = ~a;
    printf("result is %d\n",result);
    result = a<< 2;
    printf("result is %d\n",result);
    result = a >> 2;
    printf("result is %d\n",result);
    return 0;
}