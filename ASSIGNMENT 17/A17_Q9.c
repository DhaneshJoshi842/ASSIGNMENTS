// created on 4/11/22 to print the numbers till user enters 0
#include <stdio.h>
int main()
{
    int a;
    printf("enter a number and to stop the program enter 0\n");
    for (int i = 1; i > 0; i++)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
        else if (a % 10 == 0)
        {
            printf("enter another number\n");
            scanf("%d", &a);
        }
        printf("the entered number is %d\n", a);
    }
}