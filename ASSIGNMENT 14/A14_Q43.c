// created on 29/10/22
// taken from A13(Q7)
#include <stdio.h>
void leap(a);
void nleap(a);
int main()
{
    int a;
    printf("enter year\n");
    scanf("%d", &a);
    if (a % 4 == 0)
    {
        leap(a);
    }
    else
    {
        nleap(a);
    }
}
void leap(a) { printf("%d is a leap year\n", a); }
void nleap(a) { printf("%d is not a leap year\n", a); }
