#include <stdio.h>
// created on 17/10/22
void corrected();
int main()
{
    int a = 2 / 5.0;
    float b = 2 / 5.0;
    printf("value of a is %d\n", a);
    printf("value of b is %f\n", b);
    corrected();
}
void corrected()
{
    float a = 2 / 5.0,
          b = a;
    printf("after correction-\n");
    printf("value of a is %f\n");
    printf("value of b is %f\n");
}
