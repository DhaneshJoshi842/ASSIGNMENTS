// created on 21/10/22 to print first 10 odd natural number
#include <stdio.h>
int main()
{
    int a, i;
    printf("enter 1st odd natural number\n");
    scanf("%d", &a);
    a = a - 2;

    for (int i = a; i <= 8; i++)
    {
        a = a + 2;
        printf(" %d ", a);
    }
}