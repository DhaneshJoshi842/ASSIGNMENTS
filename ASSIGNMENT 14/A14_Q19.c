// created on 28/10/22 to identify the given number is odd or even and divisible by 5 or not
// taken from A7(Q5 AND Q6)
#include <stdio.h.>
void odd();
void even();
void div(a);
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        even();
    }
    else
    {
        odd();
    }
    div(a);
}
void even() { printf("number is even\n"); }
void odd() { printf("number is odd\n"); }
void div(a)
{
    if (a % 5 == 0)

        printf("number is divisible by 5");
}