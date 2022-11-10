// created on 21/10/22 to print first 10 odd number in reverse order
#include <stdio.h>
int main()
{
    int a, i, b;
    printf("enter 10th odd natural number\n");
    scanf("%d", &a);
    a = a + 1;

    for (i = a; i >= 1; i--)
    {
        i = i - 1;
        printf(" %d ", i);
    }
}