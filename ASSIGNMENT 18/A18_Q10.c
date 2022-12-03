// created on 26/11/22 to copy the value of array into another array
#include <stdio.h>
int main()
{
    int a[10], b[10]; // let us assume that size is 10
    for (int i = 0; i < 10; i++)
    {
        printf("enter a number:\n");
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    printf("the elements of the array are:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
}