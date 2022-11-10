// created on 28/10/22 to find out the profit and loss %
// taken from A7(Q9)
#include <stdio.h>
int p(sp, cp);
int l(sp, cp);
int main()
{
    int sp, cp, a, b;
    printf("enter cost price and selling price of product\n ");
    scanf("%d\n%d", &cp, &sp);
    a = p(sp, cp);
    {
        printf("profit percentage is %d\n", a);
    }
    b = l(sp, cp);
    {
        printf("loss percentage is %d", b);
    }
}
int p(sp, cp)
{
    return ((sp - cp) * 100) / (cp);
}
int l(sp, cp)
{
    return ((cp - sp) * 100) / (cp);
}