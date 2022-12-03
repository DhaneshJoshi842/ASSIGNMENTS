// created on 20/11/22 to print the greatest number among all number
#include <stdio.h>
int main()
{
    int a[9], b, c;
    printf("enter a number\n");
    scanf("%d", &b);
    c = b;
    for (int i = 0; i < 9; i++)
    {
        printf("enter a number\n");
        scanf("%d", &a[i]);
        if (a[i] > c)
        {
            c = a[i];
        }
    }
    printf("the greatest number among all is %d", c);
}