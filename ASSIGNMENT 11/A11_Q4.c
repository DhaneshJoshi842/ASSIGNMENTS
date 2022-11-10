#include <stdio.h>
// created on 18/10/22 to print the numbers till the user wants to print
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        printf("%d ", i);
    }
}