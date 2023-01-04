// created on 2/1/23 to find out the size of the string
#include <stdio.h>
int main()
{
    char name[10];
    int s = 0;
    printf("enter a string:");
    scanf("%s", name);                    // while taking string as a input there is no need to use "&" because here name itself is the base address
    for (int i = 0; name[i] != '\0'; i++) // where \0 is the null charecter which shows that the string is gona to be eneded up
    {
        s = s + 1;
    }
    printf("the size of string is %d\n", s);
    printf("%c", name[2]);
}