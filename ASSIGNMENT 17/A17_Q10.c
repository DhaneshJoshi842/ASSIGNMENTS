// created on 4/11/22 to print the sum of odd numbers
#include <stdio.h>
int main()
{
    int a, b = -1;
    printf("how many odd numbers you wants to print\n");
    scanf("%d", &a);
    printf("odd numbers are:");
    for (int i = 1; i <= a; i++)
    {
        b = b + 2;
        printf("%d ", b);
    }
}