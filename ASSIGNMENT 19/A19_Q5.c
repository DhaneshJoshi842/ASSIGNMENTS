// created on 3/12/22 to print the value inside the array in reverse order
#include <stdio.h>
void rev(int[], int);
int main()
{
    int a[100], count = 0;
    for (int i = 0; i < 100; i++)
    {
        printf("enter a number:");
        scanf("%d", &a[i]);
        if (a[i] == 0)
        {
            break;
        }
        count = count + 1;
    }
    rev(a, count);
}
void rev(int a[], int count)
{
    int b;
    printf("the no. of elements in array are:%d\n", count);
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (a[i] < a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    printf("the elements in the reverse order are:");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", a[i]);
    }
}