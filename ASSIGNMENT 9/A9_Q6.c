#include <stdio.h>
// created by dhanesh joshi to find out the sum of three sides of triangle
int main()
{
    int a, b, c;
    printf("enter 1st side\n");
    scanf("%d", &a);
    printf("enter 2nd side\n");
    scanf("%d", &b);
    printf("enter 3rd side\n");
    scanf("%d", &c);

    if (a + b > c)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is not valid");
    }
}