// created on 6/11/22 to print all the prime numbers b/w two given number
#include <stdio.h>
int main()
{
    int a, b, x;
    printf("enter the first number and second number \n");
    scanf("%d\n%d", &a, &b);
    if (a < 1)
    {
        printf("enter a nuber greater than 1");
        scanf("%d", a);
    }
    else if (a == 1 && b == 3)
    {
        printf("prime no are-1\n2\n3\n");
    }
    else if (a == 1 && b == 2)
    {
        printf("1\n2\n");
    }
    printf("prime no. b/w %d and %d are/is-\n", a, b);
    for (int i = a; i <= b; i++) // here you can also find to the no b/w 1000,10000,etc...
    {
        if (a == 1 && b == 3)
        {
            printf("2\n");
            break;
        }

        for (int j = i - 1; j > 1; j--)
        {
            i % j;
            if (i % j == 0)
            {
                x = 0;
                break;
            }
            else
            {
                x = 1;
            }
        }
        if (x == 1)
        {
            printf("%d\n", i);
        }
    }
}