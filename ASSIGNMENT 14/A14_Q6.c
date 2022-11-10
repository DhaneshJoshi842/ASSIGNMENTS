// created on 27/10/22 to do some mathematical operations
// taken from A4(Q1,2,3,4)
// NOTE-THIS ONLY APLIES FOR INT
#include <stdio.h>
int sum(a, b);
int Sub(a, b);
int mult(a, b);
int div(a, b);
int main()
{
    int a, b, s, S, m, d, e;
    printf("enter a and b\n");
    scanf("%d\n%d", &a, &b);
    s = sum(a, b);
    printf("sum is %d\n", s);
    S = Sub(a, b);
    printf("subtraction is %d\n", S);
    m = mult(a, b);
    printf("multiplication is %d\n", m);
    d = div(a, b);
    printf("division is %d\n", d);
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
