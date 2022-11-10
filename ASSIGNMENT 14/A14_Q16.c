// created on 28/10/22
// taken from A7(Q3)
#include <stdio.h>
void success();
void fail();
int main()
{
    int num;
    printf("enter a number less than 100 and greater than 0\n");
    scanf("%d", &num);
    if (num >= 0 && num < 50)
    {
        success();
    }
    else if (num >= 50 && num <= 100)
    {
        fail();
    }
}
void success() { printf("success"); }
void fail() { printf("fail"); }