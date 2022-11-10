// created on 5/11/22 to calculate sum square of the first n natural numbers
#include <stdio.h>
int sum(int);
int main()
{
    int b, a;
    printf("how many natural's square you wants to print\n");
    scanf("%d", &a);
    b = sum(a);
    printf("sum of square of natural numbers till %d is %d", a, b);
}
int sum(a)
{
    int sum = 0, x;
    for (int i = 1; i <= a; i++)
    {
        x = i * i;
        sum = sum + x;
    }
    return sum;
}
