// created on 26/10/22 to cheq wheather the year is leap year or not using switch case
#include <stdio.h>
#include <math.h>
int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d", &year);
    switch (year % 4 == 0)
    {
    case 1:
    {
        printf("year is leap year");
        break;
    }
    }
    switch (year % 4 != 0)
    {
    case 1:
    {
        printf("year is not a leap year");
    }
    }
}