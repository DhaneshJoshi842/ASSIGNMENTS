// created on 20/11/22 to print the sum of odd and even numbers using arrays
#include <stdio.h>
int main()
{
    int a[10], b = 0, c = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("enter a number \n");
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            b = b + a[i];
        }
        else
        {
            c = c + a[i];
        }
    }
    printf("sum of even number is %d\n", b);
    printf("sum of odd number is %d", c);
}