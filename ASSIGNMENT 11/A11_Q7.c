// created on 21/10/22 to replace the unit digit of any number by 0
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter any number\n");
    scanf("%d", &a);
    b = a - a % 10;
    printf("the new number is %d", b);
}