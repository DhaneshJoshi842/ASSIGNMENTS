// created on 4/1/23 to count the total number of vovels in a string
#include <stdio.h>
int main()
{

    char ch[100];
    int s = 0;
    printf("enter a string:");
    gets(ch);
    for (int i = 0; ch[i] != '\0'; i++)
    {

        if (*(ch + i) == 'a' || *(ch + i) == 'e' || *(ch + i) == 'i' || *(ch + i) == 'o' || *(ch + i) == 'u')
        {
            s = s + 1;
        }
    }
    printf("total number of vovels are:%d", s);
}