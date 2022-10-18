#include<stdio.h>
int main()
{
    int R,S,A;
    printf("Enter the age of Ram:");
    printf("\nEnter the age of Shyam:");
    printf("\nEnter the age of Ajay:");
    scanf("%d %d %d",&R,&S,&A);
    printf("\nThe age of Ram:%d",R);
    printf("\nThe age of shyam:%d",S);
    printf("\nThe age of Ajay:%d",A);
    if(R <= S && R <= A)
    { 
        printf("Ram is the youngest\n");    
        }
        if(S <= R && S <= A)  
        {
           printf("Shyam is the youngest\n"); 
        }
        if(A <= R && A <= S)
        { 
             printf("Ajay is the youngest\n");  

        }
} 
