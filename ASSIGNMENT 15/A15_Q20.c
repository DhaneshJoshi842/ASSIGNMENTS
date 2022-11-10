// created on 5/11/22 to print the factorial sreies sum
#include <stdio.h>
void facto(int a);
int main()
{
    int a;
    printf("till which number you need to printup the sum of factoral series\n");
    scanf("%d", &a);
    facto(a);
}
void facto(a)
{
    int sum = 0, x, fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
        x = fact / i;
        sum = sum + x;
    }
    printf("sum of factorial series is %d", sum);
}