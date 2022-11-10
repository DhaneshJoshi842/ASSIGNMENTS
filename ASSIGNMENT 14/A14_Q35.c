// TAKEN FROM A10(Q10)
#include <stdio.h>
// created on 28/10/22
void corrected();
int main()
{

    float a;
    a = 2 / 9;
    printf("After Correction--\n");
    printf("value of a is %f\n", a);
    a = 2.0 / 9;
    printf("value of a is %f\n", a);
    a = 2 / 9.0;
    printf("value of a is %f\n", a);
    a = 2.0 / 9.0;
    printf("value of a is %f\n", a);
    a = 9 / 2;
    printf("value of a is %f\n", a);
    a = 9.0 / 2;
    printf("value of a is %f\n", a);
    a = 9 / 2.0;
    printf("value of a is %f\n", a);
    a = 9.0 / 2.0;
    printf("value of a is %f\n", a);
    corrected();
}
void corrected()
{
    float a;
    a = 2.0 / 9.0;
    printf("After Correction--\n");
    printf("value of a is %f\n", a);
    a = 2.0 / 9;
    printf("value of a is %f\n", a);
    a = 2 / 9.0;
    printf("value of a is %f\n", a);
    a = 2.0 / 9.0;
    printf("value of a is %f\n", a);
    a = 9.0 / 2.0;
    printf("value of a is %f\n", a);
    a = 9.0 / 2;
    printf("value of a is %f\n", a);
    a = 9 / 2.0;
    printf("value of a is %f\n", a);
    a = 9.0 / 2.0;
    printf("value of a is %f\n", a);
}