#include <stdio.h>
// creatd on 16/10/22
int main()
{
    int a = 5 / 2.0;
    float b = 5 / 2.0;
    printf("value of a is %d\n", a);
    printf("value of b is %f\n", b);
    corrected();
}
void corrected()
{
    float a = 5.0 / 2.0,
          b = 5.0 / 2.0;
    printf("after correction-\n");
    printf("value of a is %f\n,", a);
    printf("value of b is %f\n,", b);
}