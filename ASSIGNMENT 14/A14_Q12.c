// created on 27/10/22 to add the side of triangle
// taken from A5(Q8)
#include <stdio.h>
int sum(a, b, c);
int main()
{
    int a, b, c, d;
    printf("enter 1st side\n");
    scanf("%d", &a);
    printf("enter 2nd side\n");
    scanf("%d", &b);
    printf("enter 3rd side\n");
    scanf("%d", &c);
    d = sum(a, b, c);
    printf("sum of the sides of the triangle is %d", d);
}
int sum(a, b, c) { return a + b + c; }