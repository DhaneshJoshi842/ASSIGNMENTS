// created on 27/10/22 to print larger number among 2
// taken from A14(Q1)
#include <stdio.h>
void ax(a);
void bx(b);
int main()
{
    int a, b;
    printf("enter value of a and b\n ");
    scanf("%d\n%d", &a, &b);
    if (a > b)
    {
        ax(a);
    }
    else if (b > a)
    {
        bx(b);
    }
}
void ax(a) { printf("%d", a); }
void bx(b) { printf("%d", b); }