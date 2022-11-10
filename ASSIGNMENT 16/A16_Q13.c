// created on 6/11/22 to calculate the hcf b/w two numbers
#include <stdio.h>
int hcf(a, b);
int main()
{
    int c, a, b;
    printf("enter two numbers\n");
    scanf("%d\n%d", &a, &b);
    c = hcf(a, b);
    printf("the hcf b/w two numbers is %d", c);
}
int hcf(a, b)
{
    int x;
    for (int i = 1; i < a || i < b; i++)
    {
        a % i;
        b % i;
        if (a % i == 0 && b % i == 0)
        {
            x = i;
        }
    }
    return x;
}
