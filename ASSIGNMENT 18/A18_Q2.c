// created 20/11/22 to print the average of the given numbers
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
    printf("the average of the given number is %d", b / 10);
}