// created on 3/1/23 to cuont the charecters,special charecters and digits included in the string
#include <stdio.h>
int main()
{

    char a[10];
    int s = 0;
    printf("enter a string:");
    scanf("%s", a);
    for (int i = 0; a[i] != 0; i++)
    {
        s = s + 1;
    }
    printf("total char,sp.char and digits sum is:%d", s);
}