#include<stdio.h>
#include<errno.h>
int main()
{
    FILE *fp;
    fp=fopen("hello.txt","r");
    perror(fp);
    printf("value of error no:%d\n",errno);
    return 0;
}