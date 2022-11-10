#include <stdio.h>
// created by dhanesh joshi on 5/10/22 to cheq wheather a triangle is valid or not
int main()
{
    int a, b, c;
    printf("enter 1st side(a)of a triangle\n ");
    scanf("%d", &a);
    printf("enter 2nd side(b) of a triangle\n");
    scanf("%d", &b);
    printf("enter 3rd side(c) of a triangle\n");
    scanf("%d", &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is invalid");
    }
}
