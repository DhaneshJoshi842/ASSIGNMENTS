// created on 3/10/22 to take input from user until he enter 0
#include <stdio.h>
int main()
{
    int a, x;
    printf("enter any number\n");
    for (int i = 1; i >= 0; i++)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
        x = a;
    }
    printf("you entered number before 0 is %d", x);
}