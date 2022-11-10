// created on 27/10/22 to printup the value of a variable
// taken from A2(Q2 AND Q3)
#include <stdio.h>
int value(a);
int Value(b);
int main()
{
    int a, b;
    a = value(a); // here this value (a); is also a function calling
    printf("a=%d\n", a);
    /*REMEMBER-value(a) and value (b) is equal the variable inside () dosent mean any thing
    but Value(b) value (a) is different  becuase of capital V */
    b = Value(b);
    printf("b=%d\n", b);
    return 0;
}
int value(a)
{
    a = 10;
    return a;
}
int Value(b)
{
    b = 20;
    return b;
}