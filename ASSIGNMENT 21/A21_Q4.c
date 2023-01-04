// created on 2/1/23 to to trnsform the string into the upper case
#include <stdio.h>
int main()
{
    char a[10];
    int l;
    printf("enter a string in small letters:");
    scanf("%s", a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        l = a[i];
        printf("%c", l - 32);
    }
}
