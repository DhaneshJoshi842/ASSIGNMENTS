// created on 5/11/22 to reverse a given number
#include <stdio.h>
void reverse(int);
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    reverse(a);
}
void reverse(a)
{
    for (int i = 1; i <= a; i++)
    {
        printf("%d", a % 10);
        a = (a - a % 10) / 10;

        if (a == 0)
        {
            break;
        }
    }
}
