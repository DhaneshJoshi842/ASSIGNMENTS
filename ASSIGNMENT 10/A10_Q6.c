#include <stdio.h>
void corrected();
// created on 17/10/22
int main()
{
    int a = 2.0 / 5;
    float b = 2.0 / 5;
    printf("value of  a is %d\n", a);
    printf("value of b is %f\n", b);
    corrected();
}
void corrected()
{
    float a = 2.0 / 5,
          b = a;
    printf("after correction-\n");
    printf("value of a is %f\n", a);

    printf("value of b is %f\n", b);
}