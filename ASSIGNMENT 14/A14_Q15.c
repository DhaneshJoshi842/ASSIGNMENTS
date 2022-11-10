// created on 27/10/22 to do some mathematical operations
// taken from A7(Q2)
// NOTE-ONLY USED IN INT
#include <stdio.h>
int sum(a, b);
int Sub(a, b);
int mult(a, b);
int div(a, b);
int main()
{
    int a, b, s, S, m, d, e, x;
    printf("enter a and b\n");
    scanf("%d\n%d", &a, &b);
    printf("to do addition press 1\nto do subtraction press 2\n to do multiply press 3\nto dodivide press 4\n");
    scanf("%d", &x);
    if (x == 1)

    {
        s = sum(a, b);
        printf("sum is %d\n", s);
    }
    else if (x == 2)
    {
        S = Sub(a, b);
        printf("subtraction is %d\n", S);
    }
    else if (x == 3)
    {
        m = mult(a, b);
        printf("multiplication is %d\n", m);
    }
    else if (x == 4)
    {
        d = div(a, b);
        printf("division is %d\n", d);
    }
    else
    {
        printf("no operation");
    }
}

int sum(a, b)
{
    return a + b;
}
int Sub(a, b)
{
    int m;
    printf("for %d-%d press 1 and for %d-%d press 2\n", a, b, b, a);
    scanf("%d", &m);
    if (m == 1)
    {
        return a - b;
    }
    else if (m == 2)
    {
        return b - a;
    }
    else
    {
        printf("enter valid number\n");
    }
}

int mult(a, b) { return a * b; }
int div(a, b)
{
    int n;
    printf("for %d/%d press 1 and for %d/%d press 2\n", a, b, b, a);
    scanf("%d", &n);
    if (n == 1)
    {
        return a / b;
    }
    else if (n == 2)
    {
        return b / a;
    }
    else
    {
        printf("enter valid number");
    }
}
