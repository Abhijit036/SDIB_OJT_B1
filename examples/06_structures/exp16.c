#include<stdio.h>
int main()
{
    struct C
    {
        
        double z;
        short int y;
        int x;
    };
    printf("size of struct:%d\n",sizeof(struct C));
    return 0;

}