#include <stdio.h>
// created on 7/10/22 to to swap the values of variables by using 3 variable
int main()
{
    int a, b, c;
    printf("enter value of a\n");
    scanf("%d", &a);
    printf("enter value of b\n");
    scanf("%d", &b);
    printf("before swap value of a is %d and value of b is %d\n", a, b);
    c = b;
    b = a;
    a = c;
    printf("after swap value of a is %d and value of b is %d", a, b);
}