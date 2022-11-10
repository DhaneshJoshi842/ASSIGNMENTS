#include <stdio.h>
// created on 17/10/22 to print hello world n number of times
int main()
{
    int a;
    printf("how many times yo have to print hello world\n");
    scanf("%d", &a);
    for (int i = 1; i < a; i++)
    {
        printf("hello world\n");
    }
}