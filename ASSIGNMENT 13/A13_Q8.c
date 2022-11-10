// created on 26/10/22 to convert positive number to negative and negative to positive
#include <stdio.h>
int main()
{
    int number, a, b;
    printf("enter any number\n");
    scanf("%d", &number);
    switch (number > 0)
    {
    case 1:
        printf("%d", -1 * number);
        break;
    }
    switch (number < 0)
    {
    case 1:
        printf("%d", -1 * number);
        break;
    }
}
