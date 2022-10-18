#include<stdio.h>  
 int main()    
{    
    int num,m=0,rem=0,place=1;
    printf("enter a number: ");
    scanf("%d",&num);
    

    printf("binary of %d is: ",num);
    while(num)
    {
        rem=num%2;
        
        num=num/2;
        
        m=m+(rem*place);
        
        place=place*10;
        
    }
    printf("%d\n",m);
}