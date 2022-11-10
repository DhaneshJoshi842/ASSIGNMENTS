#include <stdio.h>
// created on 11/10/22 to cheq wheather a year is leap year or not
int main()
{
    int a;
    printf("enter year\n");
    scanf("%d", &a);
    if (a % 4 == 0)
    {
        printf("year is leap year");
    }
    else
    {
        printf("year is not a leap year");
    }
}