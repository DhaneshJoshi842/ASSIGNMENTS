// created on 29/10/22 to calculate the simple interest
#include <stdio.h>
int si(amount, in);
int main()
{
    int amount, in, a;
    printf("enter the amount and then enter how many interest you have to put\n");
    scanf("%d\n%d", &amount, &in);
    a = si(amount, in);
    printf("simple interest is %d", a);
}
int si(amount, in)
{
    return (amount * in) / (100);
}
