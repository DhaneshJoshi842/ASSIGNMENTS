#include <stdio.h>
void corrected();
// created on 16/10/22 to test arthematic operation
int main()
{

    int i = 5.0 / 2;
    float f = 5.0 / 2;
    printf("value of i is %d\n", i);
    printf("value of f is %f\n", f);
    corrected();
}
void corrected()
{
    float i = 5 / 2.0; // ORa=5.0/2.0
    float f = 5 / 2.0;
    printf("after correction-\n");
    printf("value of a is %f\n", i);
    printf("value of f is %f\n", f);
}
