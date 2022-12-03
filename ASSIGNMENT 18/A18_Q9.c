// created on 27/11/22 toread the no of elements in array and to print them in reverse order
#include <stdio.h>
int main()
{
    int a[100]; // assuming its size to be 100
    int count = 0, b;
    for (int i = 0; i < 100; i++)
    {
        printf("enter a number:\n");
        scanf("%d", &a[i]);
        if (a[i] == -1)
        {
            break;
        }
        count = count + 1;
    }
    printf("the number of elements in array are %d\n", count);
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
    printf("the sorted one are:");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", a[i]);
    }
}