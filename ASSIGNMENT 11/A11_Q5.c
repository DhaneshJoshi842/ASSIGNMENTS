#include <stdio.h>
// created on 18/10/22 to print n number of pairs
int main()
{
    int a, b, c, i, e;
    printf("enter number of pairs\n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        printf("enter pair of two numbers\n");
        scanf("%d%d", &b, &c);
        e = b + c;
        printf("sum of both the numbers is %d\n", e);
    }
}