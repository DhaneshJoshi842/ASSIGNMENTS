#include <stdio.h>
// created on 27/10/22 to convert ferenheit into degree centegrade
// C=5/9*(F-32)
int dc(ferenhiet);
int main()
{
    int ferenhiet, degreeC, a;
    printf("enter room temperature(fh)\n");
    scanf("%d", &ferenhiet);
    a = dc(ferenhiet);
    printf("room temerature is %d degree centigrade", a);
}
int dc(ferenhiet)
{
    return 5 * (ferenhiet - 32) / (9);
}