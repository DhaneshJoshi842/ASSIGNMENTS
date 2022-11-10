// created on 29/10/22 to print n odd natural number
#include <stdio.h>
void odd(a);
int main()
{
    int a, b;
    printf("enter a odd number\n");
    scanf("%d", &a);
    odd(a);
}
void odd(a)
{
    for (int i = 0; i <= a; i++)
    {
        i = i + 1;
        printf("%d ", i);
    }
}