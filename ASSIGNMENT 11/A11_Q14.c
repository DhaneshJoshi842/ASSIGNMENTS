// created on 23/10/22 to print table of two or any other number
#include <stdio.h>
int main()
{
    int a, i;
    printf("enter a number\n");
    scanf("%d", &a);
    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", a, i, a * i);
    }
}
