// created on 23/10/22 to print n no. of natural numbers
#include <stdio.h>
int main()
{
    int a, i;
    printf("till which number you wants to print natural numbers\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf("%d ", i);
    }
}