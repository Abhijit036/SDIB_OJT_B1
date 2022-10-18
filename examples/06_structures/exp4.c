#include<stdio.h>
struct student 
{
char name[10];
int  roll;
float  height;
}a;
int main()
{
    printf("%d",sizeof(a));
}