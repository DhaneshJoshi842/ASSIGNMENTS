// created on 29/10/22 to print factorial of a number
#include <stdio.h>
int fact(a);
int main()
{
    int a, b;
    printf("enter a number\n");
    scanf("%d", &a);
    b = fact(a);
    printf("factorial of a number is %d", b);
}
int fact(a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
