// created on 28/10/22 to dtermine about the given number w.r.t 10
// taken from A7(Q4)
#include <stdio.h>
void p();
void n();
void z();
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    if (a > 0)
    {
        p();
    }
    else if (a < 0)
    {
        n();
    }
    else if (a == 0)
    {
        z();
    }
}
void p() { printf("number is positive"); }
void n() { printf("number is neagtive "); }
void z() { printf("number is zero"); }
