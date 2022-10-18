#include<stdio.h>
int func(int);
int main()
{
int n,s;
printf("\n no : ");
scanf("%d",&n);
s = func(n);
printf("\n Square is : %d ", s);
}
int func(int temp)
{
return temp*temp;
}