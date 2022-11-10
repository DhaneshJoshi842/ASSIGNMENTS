// created on 29/10/22 to print N natural numbers
#include <stdio.h>
void x(a);
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    x(a);
}
void x(a)
{
    for (int i = 1; i <= a; i++)
    {
        printf("%d ", i);
    }
}
