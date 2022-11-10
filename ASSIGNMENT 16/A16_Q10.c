// created on 5/11/22 to print the nth number of fabonacci sereies
#include <stdio.h>
int nth(int a, int b, int c);
int main()
{
    int b = 0, c = 1, a, d;
    printf("enter which term you should wants to print\n");
    scanf("%d", &a);
    d = nth(a, b, c);
    printf("your term is %d", d);
}
int nth(a, b, c)
{
    int nextnumber, x;
    for (int i = 3; i <= a; i++)
    {
        nextnumber = b + c;
        b = c;
        c = nextnumber;
        x = c;
        if (i == a)
        {
            return x;
        }
    }
}