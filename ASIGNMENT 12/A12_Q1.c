// created on 23/10/22 to print hello world n no of times
#include <stdio.h>
int main()
{
    int a, i;
    printf("how many times you wants to print hello world\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf("hello world\n");
    }
}