#include <stdio.h>
// created on 17/10/22
void corrected();
int main()
{
    int a;
    float b;
    a = 2 / 5;
    b = 2 / 5;
    printf("value of a is %d\n", a);
    printf("value of b is %f\n", b);
    corrected();
}
void corrected()
{
    float a = 2.0 / 5.0;
    float b = 2.0 / 5.0;
    printf("after correction-\n");
    printf("value of a is %f\n", a);
    printf("value of b is %f\n", b);
}