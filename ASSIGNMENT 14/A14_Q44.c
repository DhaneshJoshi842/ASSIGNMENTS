// created on 28/10/22
// taken from A13(Q8)
#include <stdio.h>
int pn(a);
int main()
{
    int a, b;
    printf("enter a number\n");
    scanf("%d", &a);
    b = pn(a);
    printf("%d", b);
}
int pn(a) { return -1 * a; }