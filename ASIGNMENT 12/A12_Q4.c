// created on 23/10/22 to calculate factorial of a number
#include <stdio.h>
int main()
{
    int a, i, fact = 1;
    printf("which numbers factorial you wants to print\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    printf("factorial of a number is %d\n", fact);
}
