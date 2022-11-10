// created on 30/10/22 to ind out the lcm of a numbers;
#include <stdio.h>
int lcm(a, b);
int main()
{
    int a, b, c;
    printf("enter the two numbers b/w you want to take lcm\n");
    scanf("%d\n%d", &a, &b);
    c = lcm(a, b);
    printf("lcm is %d", c);
}
int lcm(a, b)
{
    if (a > b)
    {
        if (a % b == 0)
        {
            return a;
        }
        else
        {
            return a * b;
        }
    }
    else if (b > a)
    {

        if (b % a == 0)
        {
            return b;
        }
        else
        {
            return b * a;
        }
    }
}