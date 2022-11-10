// created on 28/10/22
// taken from A13(5)
#include <stdio.h>
void isoEQUI(a, b, c);
void right(a, b, c);
int main()
{
    int a, b, c;
    printf("enter all three sides of triangle\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    isoEQUI(a, b, c);
    right(a, b, c);
}
void isoEQUI(a, b, c)
{
    if (a == b && b == c && a == c)
    {
        printf("triangle is equilateral\n");
    }
    else
    {
        printf("triangle is not equilateral\n");
        if (a == b || b == c || c == a)
        {
            printf("triangle is isoscalene\n");
        }
    }
}
void right(a, b, c)
{
    if (a * a == b * b + c * c || c * c == b * b + a * a || b * b == a * a + c * c)
    {
        printf("triangle is right angle triangle\n");
    }
    else
    {
        printf("triangle is not right angle");
    }
}
