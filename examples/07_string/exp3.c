#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="hello";
    char b[20]="hi";
    printf("%s\n",strcpy(a,b));
    printf("%s\n",strcmp(a,b));
    printf("%s\n",strcat(a,b));
    printf("%s\n",strlen(a));
    printf("%s\n",strlen(b));

}