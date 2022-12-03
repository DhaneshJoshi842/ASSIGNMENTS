// crated on 24/11/22 to to the sorting of elements in arrys
#include <stdio.h>
int main()
{
    int a[10], b;
    for (int i = 0; i < 10; i++)
    {
        printf("enter a number\n");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                b = a[i];
                a[i] = a[j]; // here we do the switching of the elements
                a[j] = b;
            }
        }
    }
    printf("the sorted one are:\n");
    for (int l = 0; l < 10; l++)
    {
        printf("%d\n", a[l]);
    }
}