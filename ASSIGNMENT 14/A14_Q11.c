// created on 27/10/22 to caculate parameters of some shapes
// taken from A5(Q2,3,4,5,6,7)
#include <stdio.h>
void rectangle();
void circle();
void square();
int main()
{
    printf("WELCOME\n");
    rectangle();
    circle();
    square();
    return 0;
}
void rectangle()
{
    int l, b, aofr, pofr;
    printf("*To find out area and perimeter of rectangle-\n");
    printf("please enter length\n");
    scanf("%d", &l);
    printf("please enter breadth\n");
    scanf("%d", &b);
    aofr = l * b;
    pofr = 2 * (l + b);
    printf("area of rectangle is %d\n", aofr);
    printf("perimeter of rectangle is %d\n", pofr);
}
void circle()
{
    int r;
    float pi = 3.14, cofc, aofc;
    printf("*To find out circumference and area of circle-\n");
    printf("please enter radious of circle\n");
    scanf("%d", &r);
    aofc = pi * r * r;
    cofc = 2 * pi * r;
    printf("area of circle is %f\n", aofc);
    printf("circumference of circle is %f\n", cofc);
}
void square()
{
    int side, aofs, pofs;
    printf("*To find out area and perimeter of square-\n");
    printf("enter side of square\n");
    scanf("%d", &side);
    aofs = side * side;
    pofs = 4 * side;
    printf("area of square is %d\n", aofs);
    printf("perimeter of square is %d\n", pofs);
}
