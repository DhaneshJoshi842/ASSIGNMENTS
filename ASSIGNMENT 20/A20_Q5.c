// created on 1/12/22 to print up the marks of the student
#include <stdio.h>
struct student
{
    int id;
    char name[10];
    int phy, chem, math;
} s[5];
int main()
{
    printf("enter name,id then physics,chemistry,math marks of 5 students\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d %d %d %d", &s[i].name, &s[i].id, &s[i].phy, &s[i].chem, &s[i].math);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("name-%s,id-%d,physics marks-%d,chemistry marks-%d,math marks-%d\n", s[i].name, s[i].id, s[i].phy, s[i].chem, s[i].math);
    }
}