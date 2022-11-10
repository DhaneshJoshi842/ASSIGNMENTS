// created on 4/11/22 to print the prime numbers b/w two given numbers
#include <stdio.h>
int main()
{
    int a, b, x;
    printf("enter the initial number\n");
    scanf("%d", &a);
    printf("enter the final number\n");
    scanf("%d", &b);
    printf("the prime numbers between the two given number are/is:");

    for (int i = a + 1; i < b; i++)
    {
        for (int j = 2; j < i; j++)
        {
            x = i % j;
            if (i % j == 0)
            {
                break;
            }
        }
        if (x != 0)
        {
            printf("%d ", i);
        }
    }
}