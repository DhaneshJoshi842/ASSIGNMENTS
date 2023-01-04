// created on 2/1/23 to print al the unique eements in the array
#include <stdio.h>
int main()
{
    int a[5], b[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter a number:");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        int c = 1;

        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = 0;
                c++;
            }
        }
        if (a[i] != 0)
        {

            b[i] = c;
        }
    }
    printf("\nthe unique elements are:");
    for (int i = 0; i < 5; i++)
    {
        if (b[i] == 1)
            printf("%d ", a[i]);
    }
}