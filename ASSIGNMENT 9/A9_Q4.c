#include <stdio.h>
// created on 11/10/22 to cheq whweather a number is positive,negative or 0
int main()
{
    int a;
    printf("enter number\n");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("number is zero");
    }
    else if (a > 0)
    {
        printf("number is positive\n");
        if (a % 10 == 0)
        {
            printf("number is divisible by 10 ");
        }
        else
        {
            printf("number is not divisible by 10");
        }
    }
    else if (a < 0)
    {
        printf("number is negative");
    }
}