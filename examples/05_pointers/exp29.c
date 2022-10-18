#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int n=5,i;
    p=(int*)malloc(n*(sizeof(int)));
     if (p == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        printf("Memory successfully allocated using malloc.\n");
        for (i = 0; i < n; ++i) {
            p[i] = i + 1;
        }
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d\t",p[i]);
        }
    }
 
    return 0;
}