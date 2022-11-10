// created on 3/11/27 to print the sum of 10 given number and skipping the sum when the prime number comes up
#include <stdio.h>
int main()
{
    int a, s = 0, x = 2;
    printf("enter 10 non prime numbers\n");
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &a);
        for (int j = 2; j < a; j++)
        {
            x = a % j;
            if (a % j == 0)
            {
                s = s + a;
                break;
            }
        }
        if (x != 0)
        {
            printf("enter 10 non prime numbers\n");
            s = 0;
        }
    }
    printf("the sum of the 10 non prime no. is %d", s);
}
