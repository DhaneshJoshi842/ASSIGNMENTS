// created on 4/1/23 to pirnt the string in the reverse order using pointers
#include <stdio.h>
int main()
{
    char ch[100];
    int s = 0;
    printf("enter a string:");
    gets(ch);
    for (int i = 0; ch[i] != '\0'; i++)
    {
        s = s + 1;
    }
    for (int i = s; i > -1; i--)
    {
        printf("%c", *(ch + i));
    }
}
