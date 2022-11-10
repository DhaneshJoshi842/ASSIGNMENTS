// created on 28/10/22 to print table of any number;
// taken from A11(Q14)
#include <stdio.h>
void x(a, i);
int main()
{
    int a, i;
    printf("enter a number\n");
    scanf("%d", &a);
    x(a, i);
}
void x(a, i)
{
    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", a, i, a * i);
    }
}