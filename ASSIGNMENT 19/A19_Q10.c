// created on 2/1/23 to print the merged array into the assending order
#include <stdio.h>
int main()
{
    int a[5], b[5], c[10];
    printf("first array-\n");
    for (int i = 0; i < 5; i++)
    {
        printf("enter a number:");
        scanf("%d", &a[i]);
    }
    printf("second array-\n");
    for (int i = 0; i < 5; i++)
    {
        printf("enter a number:");
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }
    int j = 0;
    for (int i = 5; i < 10; i++)
    {
        c[i] = b[j];
        j = j + 1;
    }
    int l;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {

            if (c[i] >= c[j])
            {
                l = c[i];
                c[i] = c[j];
                c[j] = l;
            }
        }
    }
    printf("the sorted and merged array elements are-\n ");
    for (int i = 0; i < 10; i++)
    {

        printf("%d ", c[i]);
    }
}