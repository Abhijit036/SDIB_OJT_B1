//Even or Odd using Function
#include<stdio.h>
int odev(int);
int main()
{
    int n;
    printf("Enter no:");
    scanf("%d",&n);
    odev(n);
}
int odev(int n)
{
    if(n%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}