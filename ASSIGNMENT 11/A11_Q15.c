// created on 23/10/22 to print square of first 10 natural number
#include <stdio.h>
int main()
{
    int a, i, b;
    printf("enter the first naturl number\n");
    scanf("%d", &a);
    b = a + 9;
    for (i = a; i <= b; i++)
    {
        printf("%d*%d=%d\n", i, i, i * i);
    }
}