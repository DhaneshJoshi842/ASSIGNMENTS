// created on 28/10/22
// taken from A4(Q5)
#include <stdio.h>
int gs(a);
int main()
{
    int a, b;
    printf("enter salary per month in rs\n");
    scanf("%d", &a);
    b = gs(a);
    {
        printf("gross salary per month is %d rs", b);
    }
}
int gs(a)
{
    int allowence;
    allowence = (a * 40) / (100);
    return allowence + a;
}
