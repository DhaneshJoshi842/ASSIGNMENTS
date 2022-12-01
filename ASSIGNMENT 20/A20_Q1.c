// STRUCTURES:->
// created on 1/12/22 to print the given data of employs using structure
#include <stdio.h>
struct emp
{
    int id;
    int sal;
    char name[10];
} e1, e2, e3;
int main()
{
    struct emp e1 = {123, 123000, "dhanesh"};
    struct emp e2 = {132, 123450, "dikshit"};
    struct emp e3 = {345, 123600, "karan"};
    printf("the name of the employ is %s his id is %d and his salary is %d\n", e1.name, e1.id, e1.sal);
    printf("the name of the employ is %s his id is %d and his salary is %d\n", e2.name, e2.id, e2.sal);
    printf("the name of the employ is %s his id is %d and his salary is %d\n", e3.name, e3.id, e3.sal);
}
