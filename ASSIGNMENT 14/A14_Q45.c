// created on 29/10/22
// taken from A13(Q9)
#include <stdio.h>
int root1(a, b, c, d);
int root2(a, b, c, d);
int main()
{
    int a, b, c, d, e, f;
    printf("enter value of a,b,c\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    d = b * b - 4 * a * c;
    e = root1(a, b, c, d);
    printf("\nroot1=%d\n", e);
    f = root2(a, b, c, d);
    printf("root2=%d\n", f);
    if (d > 0)
    {
        printf("roots are real");
    }
    else if (d < 0)
    {
        printf("roots are imaginary");
    }
    else if (d == 0)
    {
        printf("roots are equal");
    }
}
int root1(a, b, c, d)
{
    return (-b + sqrt(d)) / (2 * a);
}
int root2(a, b, c, d)
{
    return (-b - sqrt(d)) / (2 * a);
}
