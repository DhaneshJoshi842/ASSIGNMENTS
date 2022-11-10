// created on 29/10/22 to print 1 if no. is odd and to print 0 if no. is even
#include <stdio.h>
int on(a);
int main()
{
    int a, b;
    printf("enter a number and remeber if no. is odd you'll get 1 and if no is even you'll get 0\n");
    scanf("%d", &a);
    b = on(a);
    printf("%d", b);
}
int on(a)
{
    if (a % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}