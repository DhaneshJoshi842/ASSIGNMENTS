// created on 2/1/23 to compare the two strings
#include <stdio.h>
int main()
{
    char a[10], b[10];
    int c = 0;
    printf("enter a string one:");
    scanf("%s", a);
    printf("enter a string two:");
    scanf("%s", b);
    for (int i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if (a[i] == b[i])
        {
            c = 0;
        }
        else
        {
            c = 1;
            break;
        }
    }
    if (c == 0)
    {
        printf("strings are equal");
    }
    else
    {
        printf("strings are not equql");
    }
}