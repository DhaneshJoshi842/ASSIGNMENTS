// created on 5/11/22 to printup the fabonaaci series
#include <stdio.h>
void fabonaaci(int a, int b, int c);
int main()
{
    int a, b = 0, c = 1;
    printf("how many numbers you wants to take\n");
    scanf("%d", &a);
    fabonaaci(a, b, c);
}
void fabonaaci(a, b, c)
{
    printf("the number of fabonaaci series-\n");
    printf("%d\n", b);
    printf("%d\n", c);
    if (a == 2)
    {
        return 0;
    }
    if (a <= 1)
    {
        printf("enter a number greater than 1");
    }
    int nextnumber;
    for (int i = 3; i <= a; i++)
    {
        nextnumber = b + c;
        b = c;
        c = nextnumber;
        printf("%d\n", c);
    }
}