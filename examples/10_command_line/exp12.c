#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun(int);
int main(int argc)
{
    printf("%d\n",argc);
    fun(argc);
    return 0;
}
void fun(int i)
{
    if(i!=4)
    main(++i);
}