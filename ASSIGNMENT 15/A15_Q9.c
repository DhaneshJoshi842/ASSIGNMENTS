// created on 30/10/22 to identify the the given digit is contains in a number or not
#include <stdio.h>
int digit(dig, num);
int main()
{
    int dig, num, a;
    printf("enter a digit\n");
    scanf("%d", &dig);
    printf("enter a number\n");
    scanf("%d", &num);
    a = digit(dig, num);
    printf("%d", a);
    if (a == 1)
    {
        printf("\nthe number contains that digit");
    }
    else if (a == 0)
    {
        printf("\nthe number did not contains that digit");
    }
}
int digit(dig, num)
{
    int rem;
    for (; num >= 0;)
    {
        rem = num % 10;
        if (rem == dig)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        num = (num - rem) / 10;
    }
}