#include <stdio.h>
int main()
{
    int arr[5];
    int *ptr = arr; // You can assign an array of the first element directly using the identifier.
    for (int i = 0; i < 5; i++) {
        printf("enter the value of array at place %d : ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    ptr = arr; // This line was missing
    for (int i = 0; i < 5; i++) {
        printf("value of array at place %d is %d\n", i + 1, *(ptr + i));
        // ptr++;
    }
    return 0;
}
