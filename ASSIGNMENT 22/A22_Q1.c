// created on 3/1/23 to switch the values of the valriables using pointrs
#include <stdio.h>
void swap();
int main()
{
    int a, b;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    int *ptr1 = &a, *ptr2 = &b;
    printf("before swaping a-%d and b-%d\n", a, b);
    swap(&a, &b);
    printf("after swaping a-%d and b-%d", a, b);
}
void swap(int *ptr1, int *ptr2)
{
    int m;
    m = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = m;
}
