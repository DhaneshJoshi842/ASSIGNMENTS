// created on 6/11/22 to print all the prime numbers comes under the 100
#include <stdio.h>
int main()
{
    int x;
    printf("the prime no. b/w 1to 100 are-\n1,2,");
    for (int i = 3; i <= 100; i++) // here you can also find to the no b/w 1000,10000,etc...
    {
        for (int j = i - 1; j > 1; j--)
        {
            i % j;
            if (i % j == 0)
            {
                x = 0;
                break;
            }
            else
            {
                x = 1;
            }
        }
        if (x == 1)
        {
            printf("%d,", i);
        }
    }
}