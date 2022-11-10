// created on 28/10/22 to convert INR into USD
// taken from A8(Q7)
#include <stdio.h>
int USD(a);
int main()
{
    int a, b;
    printf("enter amount in RS\n");
    scanf("%d", &a);
    b = USD(a);
    printf("amount in USD is %d", b);
}
int USD(a) { return a / 80; }
