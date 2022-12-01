// created on 1/12/22 to store the data of employs using structure and the data should be taken from user
#include <stdio.h>
struct emp
{

    int id;
    char name[10];
    float salary;
};
int main()
{
    struct emp e[3];
    printf("enter the name of the all 3 employs\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", &e[i].name);
    }
    printf("\nenter their id number:-\n");
    for (int j = 0; j < 3; j++)
    {
        scanf("%d", &e[j].id);
    }
    printf("\nenter their salary:-\n");
    for (int k = 0; k < 3; k++)
    {
        scanf("%f", &e[k].salary);
    }
    printf("\nthe name of the employs are:-\n");
    for (int l = 0; l < 3; l++)
    {
        printf("%s\n", e[l].name);
    }
    for (int m = 0; m < 3; m++)
    {
        printf("\nthe id number of %s is %d and salary is %f rs\n", e[m].name, e[m].id, e[m].salary);
    }
}
