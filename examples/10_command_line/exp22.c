#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
   int i;
   for (i=1; i < 3; i++)
     printf("%u\n",argv[i]);
    return 0;
}