// created on 23/10/22 to show the number of days present in the month
#include <stdio.h>
int main()
{
    int day;
    printf("enter the month number\n ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
    {
        printf("31");
        break;
    }
    case 2:
    {
        printf("28 for normal year and 29 for leap year");
        break;
    }
    case 3:
    {
        printf("31");
        break;
    }
    case 4:
    {
        printf("30");
        break;
    }
    case 5:
    {
        printf("31");
        break;
    }
    case 6:
    {
        printf("30");
        break;
    }
    case 7:
    {
        printf("31");
        break;
    }
    case 8:
    {
        printf("31");
        break;
    }
    case 9:
    {
        printf("30");
        break;
    }
    case 10:
    {
        printf("31");

        break;
    }
    case 11:
    {
        printf("30");
        break;
    }
    case 12:
    {
        printf("31");
        break;
    }
    default:
    {
        printf("enter correct month number");
    }
    }
}