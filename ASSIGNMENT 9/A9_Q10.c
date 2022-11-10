#include <stdio.h>
// created on 12/10/22 to calculate electricity bill on some perticular conditions
int main()
{
    float a, b, c, d, e, f, g;
    printf("enter unit\n ");
    scanf("%f", &a);
    if (a <= 50 && a > 0)
    {
        printf("your bill is %f RS\n", a * 0.50);
    }
    else if (a > 50 && a <= 150)
    {
        b = 50 * 0.5;
        a = a - 50;
        c = a * 0.75;
        printf("your bill is %f RS\n", b + c);
    }
    else if (a > 150 && a <= 250)
    {
        b = 50 * 0.5;
        c = 100 * 0.75;
        d = a - 150;
        e = d * 1.20;
        printf("your bill is %f RS", b + c + e);
    }
    else if (a < 250)
        ;
    {
        b = 50 * 0.5;
        c = 100 * 0.75;
        d = 100 * 1.20;
        e = a - 250;
        f = e * 1.50;
        g = b + c + d + f;
        printf("your bill is %f RS", g + g * 0.20);
    }
}
