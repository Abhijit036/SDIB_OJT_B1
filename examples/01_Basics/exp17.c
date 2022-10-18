#include<stdio.h>
int main()
{
    unsigned char ch=5;//ch = 0000 0101
    ch = ~ch;
    printf("%d",ch);
}