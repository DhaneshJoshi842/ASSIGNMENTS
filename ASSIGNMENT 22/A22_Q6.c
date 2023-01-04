// created on 4/1/23 to print the values stored in array in reverse order using pointer
#include <stdio.h>
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {

        printf("enter a number:");
        scanf("%d", &a[i]);
    }
    printf("the number in the reverse order are:");
    for (int i = 9; i > -1; i--)
    {
        printf("%d ", *(a + i));
    }
}