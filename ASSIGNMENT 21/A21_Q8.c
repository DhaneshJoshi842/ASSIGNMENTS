// created on 3/1/23 to copy one to the another string
#include <stdio.h>
int main()
{

    char a[100], b[100];
    printf("enter a string:");
    gets(a); // this gets also works as an scanf but more useful because it not only take the char. but also able to get thr special character and "space char."
    for (int i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    printf("%s", b);
}