// created on 3/1/23 to reverse the string
#include <stdio.h>
int main()
{
    char a[10];
    int k = 0;
    printf("enter a string:");
    scanf("%s", a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        k = k + 1;
    }
    for (int j = k - 1; j > -1; j--)
    {
        printf("%c", a[j]);
    }
}