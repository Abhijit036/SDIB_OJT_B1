#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    while (--argc>0)
    {
       printf("%s\n",*++argv);
    }
    return 0;
}