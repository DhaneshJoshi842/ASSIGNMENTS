// created on 3/12/22 to print the smallest number among all
#include <stdio.h>
int main()
{
    int a[10], b;
    for (int i = 0; i < 10; i++)
    {
        printf("enter a number:\n");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] < a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    printf("the smallest number among all is %d", b);
}