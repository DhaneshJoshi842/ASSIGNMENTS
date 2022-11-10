// created on 27/10/22 to to print natural numbers till n
// taken from A6(Q2)
#include <stdio.h>
int h(hindi);
int e(english);
int p(physics);
int c(chemistry);
int m(math);
int main()
{
    int percent, math, physics, chemistry, hindi, english, TM, AM;
    hindi = h(hindi);
    english = e(english);
    physics = p(physics);
    chemistry = c(chemistry);
    math = m(math);
    TM = math + hindi + english + physics + chemistry;
    printf("your totalmarks are %d\n", TM);
    AM = (math + hindi + english + physics + chemistry) / (5);
    printf("average marks of all the subjects is %d\n", AM);
    percent = ((math + hindi + english + physics + chemistry) * (100)) / (500);
    printf("your total percentage is %d agrigate\n", percent);
    if (percent >= 75)
    {
        printf("first division passed");
    }
    else if (percent < 75 && percent >= 50)
    {
        printf("second division passed");
    }
    else if (percent < 50 && percent >= 33)
    {
        printf("third division passed");
    }
    else
    {
        printf("fail");
    }
}

int h(hindi)
{
    printf("enter your hindi marks\n");
    scanf("%d", &hindi);
    if (hindi >= 33)
    {
        printf("pass\n");
    }
    else
    {
        printf("fail\n");
    }
    return hindi;
}
int e(english)
{
    printf("enter you english marks\n");
    scanf("%d", &english);
    if (english >= 33)
    {
        printf("pass\n");
    }
    else
    {
        printf("fail\n");
    }
    return english;
}
int p(physics)
{
    printf("enter your physics marks\n");
    scanf("%d", &physics);
    if (physics >= 33)
    {
        printf("pass\n");
    }
    else
    {
        printf("fail\n");
    }
    return physics;
}
int c(chemistry)
{
    printf("enter your chemistry marks\n");
    scanf("%d", &chemistry);
    if (chemistry >= 33)
    {
        printf("pass\n");
    }
    else
    {
        printf("fail\n");
    }
    return chemistry;
}
int m(math)
{
    printf("enter your mathematics marks\n");
    scanf("%d", &math);
    if (math >= 33)
    {
        printf("pass\n");
    }
    else
    {
        printf("fail\n");
    }
    return math;
}
