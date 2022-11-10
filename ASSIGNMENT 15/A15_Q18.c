// created on 4/11/22 to print the square of a number
#include <stdio.h>
int square(int);
int main()
{
    int a, b;
    printf("enter a number\n");
    scanf("%d", &a);
    b = square(a);
    printf("squre of a number is %d", b);
}
int square(a)
{
    return a * a;
}
