#include<stdio.h>
void swap(int a,int b);
int main()
{
    int n1,n2;
    printf("input 1st number:");
    scanf("%d",&n1);
    printf("input 2nd number:");
    scanf("%d",&n2);
    printf("Before swapping n1:%d n2:%d",n1,n2);
    swap(n1,n2);
    return 0;
}
void swap(int p,int q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
     printf("\nafter swapping n1:%d n2:%d",p,q);
}
