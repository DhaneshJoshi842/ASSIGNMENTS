// created on 27/10/22 to print value of some variables
// teken from A2(Q4)
#include <stdio.h>
int printa();
int printb();
int printc();
int main()
{
    int a, b, c;
    a = printa();
    b = printb();
    c = printc();
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("c=%d", c);
}
int printa() { return 5; }
int printb() { return 6; }
int printc() { return 7; }