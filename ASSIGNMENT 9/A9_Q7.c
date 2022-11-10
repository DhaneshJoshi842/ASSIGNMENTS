#include <stdio.h>
// created on 11/10/22 to identify the type of triangle
int main()
{
    int side1, side2, side3;
    printf("enter side 1\n");
    scanf("%d", &side1);
    printf("enter side 2\n");
    scanf("%d", &side2);
    printf("enter side 3\n");
    scanf("%d", &side3);
    if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        printf("triangle is isoscalene\n");
        if (side1 == side2 == side3)
        {
            printf("triangle is equilateral triangle");
        }
    }

    else
    {
        printf("triangle is scalene\n");
    }
}