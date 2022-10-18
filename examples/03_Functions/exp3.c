#include<stdio.h>

long fact(int a)

{

if (a == 0)

return 1;

else

return(a * fact(a-1));

}

void main()

{

int num;

long fact;

printf("Please enter a number for factorial : ");

scanf("%d", &num);

fact = fact(num);

printf("The factorial of the number %d is equal to : %ld\n", num, fact);

return 0;

}