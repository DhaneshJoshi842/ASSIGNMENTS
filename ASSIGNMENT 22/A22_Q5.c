// created on 4/1/23 to compute the sum of al the elements in the array
#include <stdio.h>
int main()
{

    int a[10];
    int s = 0;
    for (int i = 0; i < 10; i++)
    {

        printf("enter a number:");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {

        s = s + *(a + i);
    }
    printf("the sum of all the number is %d", s);
}