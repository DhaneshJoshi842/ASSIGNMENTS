// created on 2/1/23 to count all the duplicate elements in ARRAY
#include <stdio.h>
int main()
{
    int a[5], b[5] = {0}, s = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("enter a number\n");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        int c = 1;
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = 0;
                c++;
            }
        }
        if (a[i] != 0)
        {
            b[i] = c;
        }
    }
    for (int i = 0; i < 5; i++)
    {

        if (b[i] > 1)
        {
            s = s + 1;
        }
    }
    printf("total duplicate numbers are %d", s);
}