// created on 28/10/22 to dtermine about the given number w.r.t 10
// taken from A7(Q4)
#include <stdio.h>
void g10();
void e10();
void l10();
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    if (a > 10)
    {
        g10();
    }
    else if (a < 10)
    {
        l10();
    }
    else if (a == 10)
    {
        e10();
    }
}
void g10() { printf("number is greater than 10"); }
void l10() { printf("number is less than 10"); }
void e10() { printf("number is 10"); }
