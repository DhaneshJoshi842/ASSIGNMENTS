// created on 19/12/22 to print the frequency of the numbers
#include <stdio.h>
int main()
{
    int a[10], b[10];
    int count;
    for (int i = 0; i < 10; i++)
    {

        printf("enter a number:");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        count = 1;
        for (int j = i + 1; j < 10; j++)
        {

            if (a[i] == a[j])
            {
                a[j] = 0;
                count++;
            }
        }
        if (a[i] != 0)
        {
            b[i] = count;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] != 0)
        {
            printf("the frequency of %d is %d\n", a[i], b[i]);
        }
    }
}