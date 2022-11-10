#include <stdio.h>
// created on 17/10/22 to observe the output
int main()
{
    int a = 0;
    double b = 10.21;
    printf("%lu\n", sizeof(a + b));
    // remember when there is any operation perform b/w int and double then the size of the output is in doble
}