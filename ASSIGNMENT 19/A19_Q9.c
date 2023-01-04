// created on 2/1/23 to merge the two arrays
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
    printf("the merged array elements are-\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", c[i]);
    }
}