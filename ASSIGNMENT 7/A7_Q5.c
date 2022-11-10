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
        printf("number is positive");
    }
    else if (a < 0)
    {
        printf("number is negative");
    }
}