// created on 3/11/22 to print the sum of all the enter numbers except -ve number
#include <stdio.h>
int main()
{
    int a, s = 0;
    printf("enter 10 natural numbers\n");
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &a);
        if (a < 0)
        {
            printf("enter some +ve number\n");
            scanf("%d", &a);
        }
        s = s + a;
    }
    printf("the sum is %d", s);
}