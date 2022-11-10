// created on 30/10/22 to print the prime number
#include <stdio.h>
int pn(int);
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    pn(a);
}
int pn(int a)
{
    int x;
    for (int i = 2; i < a; i++)
    {
        x = a % i;

        if (x == 0)
        {
            printf("the number is not a prime number\n"); // IMP-->this return statement will ends up the hole function (we can use break statement in the if else also)
            return 0;
        }
    }
    printf("the number is prime number\n");
}
