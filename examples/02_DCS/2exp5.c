#include<stdio.h>
int main()
{
    int cho,a,b;
    printf("Enter your choice:");
    scanf("%d",&cho);
    printf("\n Enter two numbers");
    scanf("%d %d",&a,&b);
    switch (cho)
    {
    case 1;
    printf("Multipliaction of two number:%d\t",a*b);
        break;
    case 2;
    printf("Addition of two number:%d\t",a+b);
        break;
    case 3;
    printf("Divison of two number:%d\t",a/b);
        break;
    case 3;
    if(b>a)
    printf("Subtraction of two number:%d\t",a-b);
    else
    printf("enter a valid number")
        break;            
    default:
    printf("Enter valid number");
        break;
    }
}    
