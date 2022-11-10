// created on 23/10/22 to print and add n no. of pairs
#include <stdio.h>
int main()
{
    int a, b, i;
    printf("how many pairs you wants to add\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf("enter value of a and value of b\n");
        scanf("%d\n%d", &a, &b);
        printf("a+b=%d\n", a + b);
    }
}