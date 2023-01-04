// created on 3/1/22 to print the total number of words in the string
#include <stdio.h>
int main()
{
    char a[100];
    int s = 0;
    printf("enter a string:");
    gets(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
        {
            s = s + 1;
        }
    }
    printf("total words in the strings are:%d", s);
}
