// created on 25/11/22 to print the value second smallest number using arrays
#include <stdio.h>
int main()
{
    int a[10];
    int c, b;
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
                b = a[j];
                a[j] = a[i];
                a[i] = b;
            }
        }
    }
    printf("the second smalest number is %d", b);
}