#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char* argv[]){
    int a,b,result;
    char opr[10];
     
    if(argc<4){
        printf("Some parameters are missing\n");
        printf("use prg_name opr value1 value2\n");
        return -1;
    }
     
    //getting operator
    strcpy(opr,argv[1]);
    //getting values from arguments
    a=atoi(argv[2]);
    b=atoi(argv[3]);
     
     
    switch(opr[0]){
        case '+':
            result=a+b;
            break;
        case '-':
            result=a-b;
            break;
        case '*':
            result=a*b;
            break;
        default:
            printf("Invalid Operator!!!\n");
            return -1;
    }
    printf("Result is: %d %c %d = %d\n",a,opr[0],b,result);
    return 0;
}