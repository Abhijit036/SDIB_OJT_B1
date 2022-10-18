#include<stdio.h>
struct {
    int i;
    float f;
}deci;
int main()
{
    deci.i=4;
    deci.f=7.96623;
    printf("%d %.2f\n",deci.i,deci.f);
    return 0;
};
