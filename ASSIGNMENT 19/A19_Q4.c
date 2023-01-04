// created on 3/12/22 to identify the duplicate values
#include <stdio.h>
int dup(int[], int);
int main()
{
    int a[10], b;
    for (int i = 0; i < 10; i++)
    {
        printf("enter a number:\n");
        scanf("%d", &a[i]);
    }
    int size = sizeof(a) / sizeof(a[0]);
    b = dup(a, size);
    printf("the first duplicate or repitive number is %d", b);
}
int dup(int a[], int size)
{
    int c;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                c = a[i];
                break;
            }
        }
        break;
    }
    return c;
}
