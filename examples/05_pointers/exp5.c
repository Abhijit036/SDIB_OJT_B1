#include<stdio.h>

int main()
{
    int i;
    int a[10];
    printf("Your elements are:");
    for(i=0;i<=10;i++)
    scanf("%d",a+i);
    printf("elements using pointers are:");
    for(i=0;i<=10;i++)
    printf("%d",*(a + i));
}