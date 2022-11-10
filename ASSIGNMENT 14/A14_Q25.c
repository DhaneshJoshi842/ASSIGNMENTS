// created on 28/10/22 to print the unit digit of any number
// taken from A8(9) and A9(9)
#include <stdio.h>
int unitD(a);
int tenthD(a);
int main()
{
    int a, b, c;
    printf("enter a number\n");
    scanf("%d", &a);
    b = unitD(a);
    printf("unit digit is %d\n", b);
    c = tenthD(a);
    printf("tenth digit is %d\n", c);
}
int unitD(a)
{
    return a % 10;
}
int tenthD(a)
{
    return (a % 100 - a % 10) / 10;
}