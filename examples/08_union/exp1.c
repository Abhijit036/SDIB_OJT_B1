#include<stdio.h>
union student
{
    float id;
    char name;
    int age;
    double length;
}u;
int main()
{
    printf("size of union is :%d",sizeof(u));
}
