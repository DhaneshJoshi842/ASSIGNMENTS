// created on 28/10/22 to to cheq the divisibility and some othe information about the number
// taken from A8(Q3,4,5)
#include <stdio.h>
void div2(a);
void div3(a);
void div7(a);
void pn(a);
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    div2(a);
    div3(a);
    div7(a);
    pn(a);
}
void div2(a)
{
    if (a % 2 == 0)
    {
        printf("number is divisible by 2\n");
    }
    else
    {
        printf("number is not divisible by 2\n");
    }
}
void div3(a)
{
    if (a % 3 == 0)
    {
        printf("number is divisible by 3\n");
    }

    else
    {
        printf("number is not divisible by 3\n");
    }
}
void div7(a)
{
    if (a % 7 == 0)
    {
        printf("number is divisible by 7\n");
    }

    else
    {
        printf("number is not divisible by 7\n");
    }
}
void pn(a)
{
    if (a > 0)
    {
        printf("number is positive ");
    }
    else if (a < 0)
    {
        printf("number is negative ");
    }
    else
    {
        printf("number is zero\n");
    }
}
