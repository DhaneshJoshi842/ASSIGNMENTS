// created on 3/11/22 to print 10 natural numbers and it should stop printing if the user enter 10 itself
#include <stdio.h>
int main()
{
    int a;
    printf("enter 10 natural numbers but if you enter 10 program should stop printing\n");
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &a);
        if (a == 10)
        {
            break;
        }
        printf("the number is %d\n", a);
    }
}
