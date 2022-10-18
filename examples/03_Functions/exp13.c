
//C program to find the Largest of three numbers Using Function

#include<stdio.h>
int larg(int, int, int);
int main()
{
   int a,b,c, l;

   printf("Enter Three Number\n");
   scanf("%d %d %d",&a,&b,&c);
   l = gret(a,b,c);
    printf("Largest Number is : %d",l);
   return 0;
}
int gret(int a, int b, int c)
{  int gret;
  if(a>b)
  {
      if(a>c)
        gret = a;
      else
        gret = c;
  }
  else
  {
      if(b>c)
        gret = b;
      else
        gret = c;
  }
}