#include<stdio.h>
struct student

{

    int roll;

    char name[20];

    float height;

    struct marks
    {
        float maths;
        float science;
        float english;
        float avg;
        float total;
    }m;
}s={11,"sandeep",6.3};
int main()
{
    s.m.maths=10;
    s.m.english=20;
    s.m.science=50;
    s.m.avg=(s.m.maths+s.m.english+s.m.science)/3;
    s.m.total=(s.m.maths+s.m.english+s.m.science);
    printf("Student details is : \n%d\n %s\n %f\n", s.roll, s.name, s.height);
    printf("%f\n%f\n", s.m.avg, s.m.total);
}