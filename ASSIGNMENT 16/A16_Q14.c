// created on 6/11/22 to cheq that the given numbers are co-prme or not
// coprime numbers are those whose hcf is alaways 1
#include <stdio.h>
int hcf(a, b);
int main()
{
    int c, a, b;
    printf("enter two numbers\n");
    scanf("%d\n%d", &a, &b);
    c = hcf(a, b);
    printf("the hcf b/w two numbers is %d\n", c);
    if (c == 1)
    {
        printf("so yes the number are coprime\n");
    }
    else if (c != 1)
    {
        printf("so the numbers are not coprime\n");
    }
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
