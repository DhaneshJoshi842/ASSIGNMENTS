// created on 3/10/22 to print numbers eccept 10
#include <stdio.h>
int main()
{
    int a;
    printf("enter any 10 natural numbers\n");
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &a);
        if (a == 10)
        {
            continue; // this continue will skip all the statements under it
        }
        printf("the entered number is %d\n", a);
    }
}