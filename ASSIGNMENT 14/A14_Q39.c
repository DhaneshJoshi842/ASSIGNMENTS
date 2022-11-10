// created on 28/10/22
// taken from A12(Q2,3,4)
#include <stdio.h>
void x(a);
void pair(a);
void fact(a);
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    x(a);
    pair(a);
    fact(a);
}
void x(a)
{
    for (int i = 1; i <= a; i++)
    {
        printf("*%d \n", i);
    }
}
void pair(a)
{
    int c, b;
    for (int i = 1; i <= a; i++)
    {
        printf("enter two numbers\n");
        scanf("%d\n%d", &c, &b);
        printf("sum is %d\n", c + b);
    }
}
void fact(a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    printf(" factorial of %d is %d", a, fact);
}
