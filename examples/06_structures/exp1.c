#include<stdio.h>
struct student 
{
char name[30];
int  roll;
int  height;
}a={"abhijit", 1,168};
int main()
{
    printf("%d %d %s",a.roll,a.height,a.name);
}                 