// created on 3/1/23 to count the frequency of the charecters in the string
#include <stdio.h>
int main()
{
    char a[100];
    int freq[100];
    printf("enter a string:");
    gets(a);
    for (int i = 0; a[i] != '\0'; i++)

    {
        int count = 1;
        for (int j = i + 1; a[j] != '\0'; j++)
        {
            if (a[i] == a[j])
            {

                a[j] = 1;
                count = count + 1;
            }
        }
        if (a[i] != 1)
        {
            freq[i] = count;
        }
    }
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
        {
            continue;
        }
        if (a[i] != 1)
        {
            printf("the frequency of %c is %d\n", a[i], freq[i]);
        }
    }
}