// created on 3/1/22 to print the string into the lower case
#include <stdio.h>
int main()
{
    char a[10];
    int l;
    printf("enter a string in capital letters:");
    scanf("%s", a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        l = a[i];
        printf("%c", l + 32);
    }
}