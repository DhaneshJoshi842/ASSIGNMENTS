// created on 3/1/23 to print the gratest number among two numbers using pointers
#include <stdio.h>
int max(int *, int *);
int main()
{
    int a, b;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    int *ptr1 = &a, *ptr2 = &b;
    int l = max(&a, &b);
    if (l != 1)
    {
        printf("the greatest among both is number is %d", l);
    }
    else
    {
        printf("both the number are equal");
    }
}
int max(int *ptr1, int *ptr2)
{
    if (*ptr1 > *ptr2)
    {
        return *ptr1;
    }
    else if (*ptr1 < *ptr2)
    {
        return *ptr2;
    }
    else
    {
        return 1;
    }
}