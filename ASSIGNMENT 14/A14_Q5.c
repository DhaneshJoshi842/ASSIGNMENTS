// created on 27/10/22 to print up value of somne variables
// taken from A3(ALL 3 QUESTIONS)
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
    printf("c=%d\n", c);
}
int printa()
{
    int a;

    printf("enter a\n");
    scanf("%d", &a);
    return a;
}
int printb()
{
    int b;

    printf("enter b\n");
    scanf("%d", &b);
    return b;
}
int printc()
{
    int c;

    printf("enter c\n");
    scanf("%d", &c);
    return c;
}