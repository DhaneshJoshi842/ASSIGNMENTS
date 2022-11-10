#include <stdio.h>
// created on 10/10/22 to find out the gratest number among one and to do some specific conditions in some perticular condition
int main()
{
    int a, b;
    printf("enter value a\n");
    scanf("%d", &a);
    printf("enter value of b\n");
    scanf("%d", &b);
    if (a > b)
    {
        printf(" greater one is %d\n", a);
        if (a >= 500 && a <= 1000)
        {
            printf("the number a is b/w 500-1000\n");
        }
        else
        {
            printf("number a is not b/w 500-1000\n");
        }
    }
    else if (b > a)
    {
        printf("greater one is %d\n", b);
        if (b >= 500 && b <= 1000)
        {
            printf("the number b is b/w 500-1000\n");
        }
        else
        {
            printf("number b is not b/w 500-1000");
        }
    }
}