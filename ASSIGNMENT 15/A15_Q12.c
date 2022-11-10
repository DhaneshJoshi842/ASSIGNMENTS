// created on 30/10/22 to find out the hcf b/ two numbers
#include <stdio.h>
int hcf(a, b);
int main()
{
    int c, a, b;
    printf("enter the two numbers b/w you want to take hcf \n");
    scanf("%d\n%d", &a, &b);
    c = hcf(a, b);
    printf("hcf is %d", c);
}
int hcf(a, b)
{
    int hcf;
    for (int i = 1; i <= a || i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}