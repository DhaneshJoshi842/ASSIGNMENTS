// created on 23/10/22 to do some arthmatic operations
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter two numbers\n");
    scanf("%d\n%d", &a, &b);
    printf("now for addition press 1\nfor subtraction press 2\nfor multiplication prees 3\nfor division press 4\n for exit press 5\n ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
    {
        printf("%d+%d=%d\n", a, b, a + b);
        break;
    }
    case 2:
    {
        int d;
        printf("for %d-%d press 1\n", a, b);
        printf("for %d-%d press 2\n", b, c);
        scanf("%d", &d);
        switch (d)
        {
        case 1:
        {
            printf("%d-%d=%d\n", a, b, a - b);
            break;
        }
        case 2:
        {
            printf("%d-%d=%d\n", b, a, b - a);
            break;
        }
        }
        break;
    }
    case 3:
    {
        printf("%d*%d=%d\n", a, b, a * b);
        break;
    }
    // remember switch case does not work for float
    case 4:
    {
        if (a > b)
        {
            printf("%d/%d=%d", a, b, c);
        }
        else if (b > a)
        {
            printf("%d/%d=%d", b, a, b / a);
        }
        break;
    }
    default:
    {
        printf("EXIT");
    }
    }
}