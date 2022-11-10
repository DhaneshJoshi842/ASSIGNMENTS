// created on 28/10/22 to cheq the sides of the triangle are valid or not
// taken from A7(Q10)
#include <stdio.h>
void side(a, b, c);
int main()
{
    int a, b, c;
    printf("enter all three sides of triangle\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    side(a, b, c);
}
void side(a, b, c)

{

    if (a + b > c && b + c > a && a + c > b)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is invalid");
    }
}