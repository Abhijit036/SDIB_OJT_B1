#include <stdio.h>
#pragma pack(1)
struct student 
{
    char name;
    int age;
    float height;
}stu;

int main() 
{
        printf("Enter name: ");
        scanf("%s", &stu.name);

        printf("Enter id: ");
        scanf("%d", &stu.age);

        printf("Enter salary: ");
        scanf("%f", &stu.height);
        printf("size of structure is : %d\n",sizeof(stu));
    
    return 0;
}