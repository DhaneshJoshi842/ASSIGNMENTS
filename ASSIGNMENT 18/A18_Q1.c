// created on 20/11/22 to print up the sum of 10 numbers using arrays
#include <stdio.h>
int main()
{
    int a[10], b = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("enter a number\n");
        scanf("%d", &a[i]);
        b = b + a[i];
    }
    printf(" sum of the given numbers is %d", b);
}