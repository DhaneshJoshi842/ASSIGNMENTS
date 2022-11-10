// created on 29/10/22 to calculate the area of circle
#include <stdio.h>
int circle(int);
int main()
{
    int r, a;
    printf("enter radious of circle\n");
    scanf("%d", &r);
    a = circle(r);
    printf("the area of circle is %d (agregate)", a);
}
int circle(r)
{
    return 3.14 * r * r;
}
