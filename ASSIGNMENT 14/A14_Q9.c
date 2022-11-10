// created on 27/10/22 to convert feet into inches
// taken from A4(Q9)

#include <stdio.h>
int in(feet);
int main()
{
    int feet, inch, a;
    printf("enter height of a student in feet\n");
    scanf("%d", &feet);
    a = in(feet);

    printf("height of a student in inches is %d", a);
}
int in(feet)
{
    return feet * 12;
}