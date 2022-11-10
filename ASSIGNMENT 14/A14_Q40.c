// created on 28/10/22
// taken from A12(Q7,9,11,13)
#include <stdio.h>
void x(a);
void odd();
void even();
void square();
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    x(a);
    odd();
    even();
    square();
}
void x(a)
{
    for (int i = a; i > 0; i--)
    {
        printf("%d ", i);
    }
}
void odd()
{
    int a;

    printf("\nenter an odd  number\n");
    scanf("%d", &a);
    a = a + 1;
    for (a; a > 0; a--)
    {
        a = a - 1;
        printf("%d ", a);
    }
}
void even()
{
    int a;

    printf("\nenter an even number\n");
    scanf("%d", &a);
    a = a + 1;
    for (a; a > 1; a--)
    {
        a = a - 1;
        printf("%d ", a);
    }
}
void square(a)
{
    int b = a + 10;

    printf("\nsquare of 10+ number from %d-\n", a);
    for (int i = a; i <= b; i++)
    {
        printf("%d ", i * i);
    }
}