// created on 21/10/22 to print 10 natural numbers is reverse order
#include <stdio.h>
int main()
{
    int a, b, i;
    printf("enter the number through you want to print up 10 values\n");
    scanf("%d", &a);
    b = a - 10;
    for (int i = a; i > b; i--)
    {
        printf("%d ", i);
    }
}