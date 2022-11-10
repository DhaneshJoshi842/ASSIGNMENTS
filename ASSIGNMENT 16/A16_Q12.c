// created on 5/11/22 to cheq that the given number is in fabonaaci series or not
#include <stdio.h>
void fabonaaci(int a, int b, int c);
int main()
{
    int a, b = 0, c = 1;
    printf("enter a number\n");
    scanf("%d", &a);
    fabonaaci(a, b, c);
}
void fabonaaci(a, b, c)
{
    if (a <= 1)
    {
        printf("enter a number greater than 1\n");
        return 0;
    }
    int nextnumber, x;
    for (int i = 3; i <= a; i++)
    {
        nextnumber = b + c;
        b = c;
        c = nextnumber;
        if (c == a)
        {
            printf("yes the number is in fabonacci series\n");
            x = 0;
            break;
        }
        else if (c != a)
        {
            x = 1;
        }
    }
    if (x == 1)
    {
        printf("no the number is not in fabonacci series\n");
    }
}