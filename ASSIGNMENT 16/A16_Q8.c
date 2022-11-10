// created on 5/11/22 to find out the lcm b/w 2 numbers
#include <stdio.h>
int lcm(int a, int b);
int main()
{
    int a, b, c;
    printf("enter the two nmbers\n");
    scanf("%d\n%d", &a, &b);
    c = lcm(a, b);
    printf("the lcm b/w these two numbers is %d", c);
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
            return a * b;
        }
    }
}
