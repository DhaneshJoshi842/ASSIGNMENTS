// created on 28/10/22
// taken from A13(Q3)
#include <stdio.h>
void burger();
void frenchfries();
void pizza();
void sandwiches();
int main()
{
    int food, a, b, c, d;
    printf("WELCOME\nto order burger press 1\nto order french fries press 2\nto order pizza press 3\nto order sandwiches press 4\n ");
    scanf("%d", &food);
    switch (food)
    {
    case 1:
    {
        burger();
        break;
    }
    case 2:
    {
        frenchfries();
        break;
    }
    case 3:
    {
        pizza();
        break;
    }
    case 4:
    {
        sandwiches();
        break;
    }
    default:
    {
        printf("enter some valid choice\n");
    }
    }
}
void burger(a)
{
    printf("enter how many burger you wants\n");
    scanf("%d", &a);
    printf("your bill is %d rs", a * 200);
}
void frenchfries(b)
{
    printf("enter how many french fries packets d you want\n");
    scanf("%d", &b);
    printf("your bill is %d rs", b * 50);
}
void pizza(c)
{
    printf("enter how many pizzas do you want\n");
    scanf("%d", &c);
    printf("your bill is %d rs", c * 500);
}
void sandwiches(d)
{
    printf("enter how many sandwitches do you want\n");
    scanf("%d", &d);
    printf("your bill is %d rs", d * 150);
}
