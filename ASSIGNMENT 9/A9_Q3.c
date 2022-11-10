#include <stdio.h>
// created on 11/10/22 to cheq wheather a number is odd or even and to do some operation on them
int main()
{
    int a;
    printf("enter your number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("number is even\n");
        if (a % 2 == 0)
        {
            printf("number is divisible by 2\n");
            if (a % 3 == 0)
            {
                printf("number is divisible by 3\n");
            }
        }
    }
    else
    {
        printf("number is odd\n");
        if (a % 5 == 0)
        {
            printf("number is divisible by 5");
        }
    }
}
