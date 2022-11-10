// created on 30/10/22 to print the next prime number comes after a given number
#include <stdio.h>
int pm(int);
int main()
{
    int a, b;
    printf("enter a number\n");
    scanf("%d", &a);
    a = a + 1;
    b = pm(a);
    printf("the next prime number is %d", b);
}
int pm(int a)
{
    int x, y;
    for (int i = 2; i > 1; i--)
    {
        y = a % i;

        if (y == 0)
        {
            a = a + 1;
            i = a;
        }
        else
        {
            x = a;
        }
    }
    return x;
}