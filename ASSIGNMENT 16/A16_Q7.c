// created on 5/11/22 to count the no of values in the given digit
#include <stdio.h>
int count(int);
int main()
{
    int a, b;
    printf("enter a digit\n");
    scanf("%d", &a);
    b = count(a);
    printf("no. of digits in a number %d is %d", a, b);
}
int count(a)
{
    int i;
    for (i = 1; i <= a; i++)
    {
        a = (a - a % 10) / 10;
        if (a == 0)
        {
            break;
        }
    }
    return i;
}
