// created on 21/10/22 to print N natural numbers is reverse order
#include <stdio.h>
int main()
{
    int a, b, i, c;
    printf("enter the number through you want to print up values\n");
    scanf("%d", &a);
    printf("how many natural number you wants to print\n");
    scanf("%d", &c);
    b = a - c;
    for (int i = a; i > b; i--)
    {
        printf("%d ", i);
    }
}