// created on 27/10/22 to print some values of variables
// taken from A2(Q5)
#include <stdio.h>
int printa();
int printb();
int printc();
int printd();
int main()
{
    int a, b, c, d;
    a = printa();
    b = printb();
    c = printc();
    d = printd();
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("c=%d\n", c);
    printf("d=%d\n", d);
}
int printa() { return 15; }
int printb() { return 16; }
int printc() { return 17; }
int printd() { return 18; }
