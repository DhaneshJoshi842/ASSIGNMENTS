// created on 6/11/22 to print the next prime number comes up after the given number
#include <stdio.h>
int npn(a);
int main()
{
    int a, b;
    printf("enter a number\n");
    scanf("%d", &a);
    b = npn(a);
    printf("the next prime number is %d", b);
}
int npn(a)
{
    int x;
    for (int i = a + 1;; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (a == 1)
            {
                return 2;
            }
            i % j;
            if (i % j == 0)
            {
                x = 1;
                break;
            }
            else
            {
                x = 2;
            }
        }
        if (x == 2)
        {
            return i;
        }
    }
}
