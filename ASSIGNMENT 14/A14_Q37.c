// created on 28/10/22 to replace a unit digit by zero
// taken from A11(Q7)
#include <stdio.h>
int replaceZ(a);
int main()
{
    int a, b;
    printf("enter a number\n");
    scanf("%d", &a);
    b = replaceZ(a);
    printf("%d", b);
}
int replaceZ(a) { return a - a % 10; }
