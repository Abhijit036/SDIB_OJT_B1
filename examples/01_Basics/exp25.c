#include<stdio.h>
int main()
{
    int a;
    printf("enter your age:");
    scanf("%d",&a);
    printf("Age is :%d",a);
    if(a==18)
    {
        printf("Apply for voter id");
    }
    else if (a>18)
    {
        printf("eligible for vote");
    }
    else
    {
        printf("not eligible");
    }
}