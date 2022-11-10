#include <stdio.h>
// remember--to find out the once digit-num%10
//          -to find out the tenth digit-(num%100-num%10)/10
//          -to find out the hunderedth digit-(nub%1000-num%100)/100
//          -to find out the thusandth digit-(nub%10000-num%1000)/1000,etc.....
//  created on 11/10/22 to identify the unit and the tenth's digit
int main()
{
    int a, b, c, d;
    printf("enter number\n");
    scanf("%d", &a);
    b = a % 10;
    printf("unit digit of a number is %d\n", b);
    c = a % 100;
    printf("tenth digit of a number is %d\n", (c - b) / 10);
    d = (c - b) / 10;

    if (b == d)
    {
        printf(" both the digits are equal");
    }
    else
    {
        printf(" both the digits are not eqaual");
    }
}
