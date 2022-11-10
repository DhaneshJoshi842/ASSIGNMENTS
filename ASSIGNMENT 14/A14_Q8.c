// created on 27/10/22 to convert km into m
// taken from A4(Q6,Q7 AND Q8)
#include <stdio.h>
int meter(km);
int cm(km);
int mm(km);
int main()
{
    int km, a, b, c;
    printf("enter distance(km)\n ");
    scanf("%d", &km);
    a = meter(km);
    printf("the distance is %d m\n", a);
    b = cm(km);
    printf("the distance is %d cm\n", b);
    c = mm(km);
    printf("the distance is %d mm\n", c);
}
int meter(km)
{
    return km * 1000;
}
int cm(km)
{
    return km * 100000;
}
int mm(km)
{
    return km * 1000000;
}