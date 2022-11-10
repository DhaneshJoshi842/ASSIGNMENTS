// created on 2/11/22 to cheq the number is prime or not
#include <stdio.h>
int main()
{
    int a, x;
    printf("enter a number\n");
    scanf("%d", &a);
    for (int i = 2; i < a; i++)
    {
        a % i;
        if (a % i == 0)
        {
            printf("the number is not a prime number\n");
            x = 2;
            break;
        }
        else if (a % i != 0)
        {
            x = 1;
        }
    }
    if (x == 1)
    {
        printf("the number is prime number");
    }
}
