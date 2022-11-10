// created on 1/11/22 to print the sum of 10 numbers
#include <stdio.h>
int main()
{
    int a, b, c, s = 0;
    printf("enter 10 numbers BUT REMEMBER ONLY NON PRIME NO. WERE ADDED\n");
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &a);
        for (int j = 2; j < a; j++)
        {
            b = a % j;
            if (b == 0)
            {
                s = s + a;
                break;
            }
        }
    }
    printf("total sum is %d", s);
}