#include <stdio.h>

//Datatype Declarations
typedef int (*arithFuncPtr)(int, int);


//Function Prototypes
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main()
{
    int a, b, optype, res;

    arithFuncPtr ptr[4];

    //ptr points to the function
    ptr[0] = add;
    ptr[1] = sub;
    ptr[2] = mul;
    ptr[3] = div;

    scanf("%i %i %i", &a, &b, &optype);

    res = (ptr[optype - 1])(a, b);

    printf("%i\n", res);

    return 0;
}

int add(int x, int y)
{
    return x+y;
}  

int sub(int x, int y)
{
    return x-y;
}  

int mul(int x, int y)
{
    return x*y;
}  

int div(int x, int y)
{
    return x/y;
}  