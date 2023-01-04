// created on 2/1/23 to count the vovels in string
#include <stdio.h>
int main()
{
    char a[10];
    int x = 0;
    printf("enter a string:");
    scanf("%s", a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            x = x + 1;
        }
    }
    printf("number of vovels in the strings are:%d", x);
}