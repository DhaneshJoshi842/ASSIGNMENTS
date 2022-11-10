// created on 23/10/22
#include <stdio.h>
int main()
{
    int food, a, b, c, d;
    printf("WELCOME\nto order burger press 1\nto order french fries press 2\nto order pizza press 3\nto order sandwiches press 4\n ");
    scanf("%d", &food);
    switch (food)
    {
    case 1:
    {
        printf("enter how many burger you wants\n");
        scanf("%d", &a);
        printf("your bill is %d rs", a * 200);
        break;
    }
    case 2:
    {
        printf("enter how many french fries packets d you want\n");
        scanf("%d", &b);
        printf("your bill is %d rs", b * 50);
        break;
    }
    case 3:
    {
        printf("enter how many pizzas do you want\n");
        scanf("%d", &c);
        printf("your bill is %d rs", c * 500);
        break;
    }
    case 4:
    {
        printf("enter how many sandwitches do you want\n");
        scanf("%d", &d);
        printf("your bill is %d rs", d * 150);
        break;
    }
    default:
    {
        printf("enter some valid choice\n");
    }
    }
}
