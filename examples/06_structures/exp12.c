#include<stdio.h>
struct student{
   int s1,s2,s3;
}s[5];
void addition(int a,int b,int c)
{
   int i,sum;
   for(i=1;i<4;i++){
      sum=a+b+c;
      printf("Student %d scored total of %d\n",i,sum);
   }
}
void main()
{
   int i;
   for(i=1;i<4;i++){
      printf("Enter marks for student %d in subject 1 = ",i);
      scanf("%d",&s[i].s1);
      printf("Enter marks for student %d in subject 2 = ",i);
      scanf("%d",&s[i].s2);
      printf("Enter marks for student %d in subject 3 = ",i);
      scanf("%d",&s[i].s3);
   }
   addition(s[i].s1,s[i].s2,s[i].s3);
}