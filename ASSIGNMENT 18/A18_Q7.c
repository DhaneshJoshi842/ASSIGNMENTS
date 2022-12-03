// created on 25/11/22 to print the second greatest number among all number using arrys
#include <stdio.h>
int main()
{
    int a[10]; // asume the size according to you
    int c, b;
    printf("enter a number:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])

            {
                b = a[j];
                a[j] = a[i];
                a[i] = b;
            }
        }
    }
    printf("the second largest number is %d\n", b);
}
