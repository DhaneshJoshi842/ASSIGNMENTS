// created on 1/12/22 to print the information of a student
#include <stdio.h>
struct student
{
    int id;
    char name[10];
    int rollno;
    double mobno;
} e[4];
int main()
{
    printf("enter name of those 4 students:\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%s", &e[i].name);
    }
    for (int j = 0; j < 4; j++)
    {
        printf("\nenter id,rollNo.,mobileno.of %s\n", e[j].name);
        scanf("%d\n%d\n%lf", &e[j].id, &e[j].rollno, &e[j].mobno);
    }
    printf("\nthe details of the four student is:\n");
    for (int k = 0; k < 4; k++)
    {
        printf("NAME-%s,id-%d,rollno-%d,mobileno-%lf\n", e[k].name, e[k].id, e[k].rollno, e[k].mobno);
    }
}
