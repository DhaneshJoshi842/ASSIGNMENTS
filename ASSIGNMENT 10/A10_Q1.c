#include <stdio.h>
void corrected();
// created on 13/10/22 to test an arthematic operation
int main()
{
    int a = 5 / 2;
    float b = 5 / 2;
    printf(" by the experimental code- \n");
    printf("value of a is %f\n", a);
    printf("value of b is %f\n", b);
    // cheq result while you run the code
    /*remeber-- while the values are already given and we want the answer in point
then mention the decimal in point also*/
    corrected();
}
void corrected()
{
    printf(" by the corrected code-\n");
    float a = 5.0 / 2.0, b = 5.0 / 2.0;
    printf(" value of a is %f\n", a);
    printf("value of b is %f\n", b);
}
