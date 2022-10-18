#include<stdio.h>
void main(int argc,char *argv[])
{
          int i,sum=0,n;
          if(argc>3)
          {
             printf("Invalid Arguments Passed.\n");
          }
          printf("Addition is:\n");
          for(i=1;i<argc;i++)
          {
            sscanf(argv[i],"%d",&n);
            sum=sum+n;
          }
          printf("%d",sum);
}