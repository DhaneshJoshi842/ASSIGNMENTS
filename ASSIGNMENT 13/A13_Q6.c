// created on 26/10/22 to estimate about the day of user
#include <stdio.h>
int main()
{
    int number;
    printf("enter a number 1 or 2 or 3 according to your chice and identify about your todays estimated day experience \n");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
    {
        printf("good");
        break;
    }
    case 2:
    {
        printf("better\n");
        break;
    }
    case 3:
    {
        printf("best");
        break;
    }
    default:
    {
        printf("enter valid number");
    }
    }
}