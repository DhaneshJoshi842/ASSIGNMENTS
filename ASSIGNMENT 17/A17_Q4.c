// created on 3/11/22 to print the sum of 10 natural numbers
#include <stdio.h>
int main()
{
    int a, s = 0;
    printf("enter 10 natural number to get their sum but if you enters any negative no. the proram should stop\n");
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &a);
        if (a < 0)
        {
            break;
        }
        s = s + a;
    }
    printf("sum of the number is %d", s);
}