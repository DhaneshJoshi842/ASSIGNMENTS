// created on 20/11/22 to print the smallest no. among all
#include <stdio.h>
int main()
{
    int a[9], b, c;
    printf("enter a number\n");
    scanf("%d", &b);
    for (int i = 0; i < 9; i++)
    {
        printf("enter a number\n");
        scanf("%d", &a[i]);
        if (a[i] < c)
        {
            c = a[i];
        }
    }
    printf("smallest number among all is %d", c);
}