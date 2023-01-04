// created on 3/12/22 to sort the elements of array
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter how many numbers you wants to take in array\n");
    {
        scanf("%d", &a);
    }
    int x[a];
    for (int i = 0; i < a; i++)
    {
        printf("enter a number:\n");
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (x[i] > x[j])
            {
                b = x[j];
                x[j] = x[i];
                x[i] = b;
            }
        }
    }
    printf("the sorted elements are:");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", x[i]);
    }
}