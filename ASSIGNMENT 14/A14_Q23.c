#include <stdio.h>
/*creator-dhanesh joshi
date-28/10/22
aim-to show no of days in specific month*/
// taken from A8(Q6)
void jan();
void feb();
void march();
void april();
void may();
void june();
void july();
void aug();
void sept();
void oct();
void nov();
void dec();
int main()
{
    int a;
    printf("enter month number\n");
    scanf("%d", &a);
    if (a == 1)
    {
        jan();
    }
    else if (a == 2)
    {
        feb();
    }
    else if (a == 3)
    {
        march();
    }
    else if (a == 4)
    {
        april();
    }
    else if (a == 5)
    {
        may();
    }
    else if (a == 6)
    {
        june();
    }
    else if (a == 7)
    {
        july();
    }
    else if (a == 8)
    {
        aug();
    }
    else if (a == 9)
    {
        sept();
    }
    else if (a == 10)
    {
        oct();
    }
    else if (a == 11)
    {
        nov();
    }
    else if (a == 12)
    {
        dec();
    }
    else
    {
        printf("enter a valid month number ");
    }
}
void jan() { printf("days in january are 31"); }
void feb() { printf("the days in febuary are 28"); }
void march() { printf("days in march are 31\n"); }
void april() { printf("days in april are 30\n"); }
void may() { printf("days in may are 31\n"); }
void june() { printf("days in june are 30\n"); }
void july() { printf("days in july are 31\n"); }
void aug() { printf("days in august are 31\n"); }
void sept() { printf("days in september are 30\n"); }
void oct() { printf("days in october are 31\n"); }
void nov() { printf("days in november are 30"); }
void dec() { printf("days in december are 31"); }