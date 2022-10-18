#include<stdio.h>
int main()
{
    int a;
    float f;
    char c;
    double d;
    long int in;
    unsigned int ui;
    short int si;
    long double li;
    printf("The size of char : %d \n",sizeof( c ));
    printf("The size of int : %d \n",sizeof( a ));
    printf("The size of float : %d \n",sizeof( f ));
    printf("The size of double : %d \n",sizeof( d ));
    printf("The size of long int: %d \n",sizeof( li ));
    printf("The size of unsigned int : %d \n",sizeof( ui ));
    printf("The size of short int : %d \n",sizeof( si));
    printf("The size of long double : %d \n",sizeof( li ));
}