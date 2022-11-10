#include <stdio.h>
// created on 18/10/22 to find out the factorial of a given number
#include <stdio.h>
int main()
{
    int num, fact = 1, i;
    printf("enter a number\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of a given number is %d", fact);
}
