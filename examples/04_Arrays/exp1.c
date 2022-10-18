#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter the no. of students:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The ids are:");
    for (i=0;i<=9;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}