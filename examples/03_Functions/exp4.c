#include<stdio.h>
int main(){
    register int i;
    register int n;
    printf("enter the number you want:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
    }


}