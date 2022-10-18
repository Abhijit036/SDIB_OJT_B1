#include<stdio.h>
int main()
{
    int r;
    float A;
    printf("Enter the radius:",r);
    scanf("%d",&r);
    printf("The radius of the circle is:%d\n",r);
    A=3.14*r*r;
    printf("The area of the circle is=%f\n",A);
}