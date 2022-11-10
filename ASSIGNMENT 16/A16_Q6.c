// created on 5/11/22 to print the factoral of a number
#include <stdio.h>
int facto(int);
int main()
{
    int a, b;
    printf("enter a number hose factorial you wants to know\n");
    scanf("%d", &a);
    b = facto(a);
    printf("factorial of a number is %d", b);
}
int facto(a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}