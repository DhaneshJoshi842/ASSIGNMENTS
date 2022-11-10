// created on 30/10/22 to find out the prime factors of a given number
#include <stdio.h>
void pf(a);
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    pf(a);
}
void pf(a)
{
    printf("prime factor of number-\n");
    for (int i = 2; i <= a;)
    {
        if (a % i == 0)
        {
            a = a / i;
            printf("%d ", i);
        }
        else
        {
            i = i + 1;
        }
    }
}