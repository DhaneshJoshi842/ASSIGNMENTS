// created on 5/11/22 to calculate sum of the first n odd natural numbers
#include <stdio.h>
int sum(int);
int main()
{
    int b, a;
    printf("how many natural odd numbers you wants to print\n");
    scanf("%d", &a);
    b = sum(a);
    printf("sum of the natural odd numbers till %d is %d", a, b);
}
int sum(a)
{
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        i = i + 1;
        sum = sum + i;
    }
    return sum;
}
