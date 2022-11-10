// created on 23/10/22 to cheq the enter sides are of which triangle
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter all three lengths\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    printf("to cheq for eqilateral press 1\nto cheq for isoscalene press 2\nto cheq for right angle press 3\n");
    scanf("%d", &d);
    switch (d)
    {
    case 1:
    {
        if (a == b == c)
        {
            printf("sides are of equilateral triangle\n");
        }
        else
        {
            printf("sides are not of equilateral\n");
        }
        break;
    }
    case 2:
    {
        if (a == b || b == c || c == a)
        {
            printf("sides are of isoscalene triangle\n");
        }
        else
        {
            printf("sides are not of isoscalene\n");
        }
        break;
    }
    case 3:
    {
        if (a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b)
        {
            printf("sides are of right angle triangle\n ");
        }
        else
        {
            printf("sides are not of right angle trianle\n");
        }
        break;
    }
    default:
    {
        printf("EXIT");
    }
    }
}
