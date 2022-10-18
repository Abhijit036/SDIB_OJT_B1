#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if((ch >=97 && ch <=122) || (ch >=65 && ch <=90))
    {
        printf("is ALPHABET");
    }
    else{
        printf(" is not ALPHABET");
    }
    return 0;
}