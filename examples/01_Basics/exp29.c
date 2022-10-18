#include<stdio.h>
#include<conio.h>

void add(int p,int q);
void subt (int p,int q);
void mult(int p,int q);
void divi(int p,int q);

void main()
{
    int a, b, sum, subt, mult, divi;
    //clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);
    add(a, b);
    subt(a, b);
    mult(a, b);
    divi(a, b);
    getch();
}
void add(int p, int q)
{
    int sum;
    sum = p + q;
    printf("Addition of a numbers is %d\n", sum);
}
void subt(int p, int q)
{
    int sub;
    sub = p - q;
    printf("subtraction of a number is %d\n", sub);
}
void mult(int p, int q)
{
    int mul;
    mul = p * q;
    printf("Multiplication of a number is %d\n", mul);
}
void divi(int p, int q)
{
    float div;
    div = p / q;
    printf("Division of a number is %f", div);
}