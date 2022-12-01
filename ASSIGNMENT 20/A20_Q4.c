// created on 1/12/22 to print 5 birthday dates
#include <stdio.h>
struct birthday
{
    char name[10];
    int date;
    char month[10];
    int year;
} d[5];
int main()
{
    printf("enter the name of the person and date of birth with year\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d %s %d", &d[i].name, &d[i].date, &d[i].month, &d[i].year);
    }
    for (int j = 0; j < 5; j++)
        printf("-->\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%s is born on %d%s%d\n", d[j].name, d[j].date, d[j].month, d[j].year);
    }
}
