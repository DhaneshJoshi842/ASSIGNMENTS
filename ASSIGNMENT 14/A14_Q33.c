// TAKEN FROM A10(Q8)
#include <stdio.h>
//  created on 28/10/22
void corrected();
int main()
{
    int a = 2 / 5;
    float b = 2.0 / 5.0;
    printf("value of a is %d\n", a);
    printf("value of b is %f\n", b);
    corrected();
}
void corrected()
{
    float a, b;
    a = 2.0 / 5.0;
    b = 2.0 / 5.0;
    printf("after correction-\n");
    printf("value of a is %f\n", a);
    printf("value of b is %f\n", b);
}
