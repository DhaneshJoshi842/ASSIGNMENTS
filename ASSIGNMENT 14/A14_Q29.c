// TAKEN FROM A10(Q4)#include <stdio.h>
//  created on 28/10/22
int main()
{
    int a = 5.0 / 2.0;
    float b = 5.0 / 2.0;
    printf("value of a is %d\n", a);
    printf("value of b is %f\n", b);
    corrected();
}
void corrected()
{
    float a = 5.0 / 2.0,
          b = a;
    printf("after corection-\n");
    printf("value of a is %f\n", a);
    printf("value of b is %f", b);
}