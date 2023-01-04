// created on 3/1/23 to print the length of the string using pointer
#include <stdio.h>
int length(char *);
int main()
{
    char ch[100];
    printf("enter the string:");
    gets(ch);
    int k = length(ch);
    printf("the size of the string is %d\n", k);
}
int length(char *ch)
{
    int s = 0;
    for (int i = 0; ch[i] != 0; i++)
    {
        s = s + 1;
    }
    return s;
}
