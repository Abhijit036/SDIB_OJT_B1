#include<stdio.h>
int main()
{
    struct C
    {
        int z;
        double y;
        short int x;
    };
    printf("size of struct:%d\n",sizeof(struct C));
    return 0;

}