// TAKEN FROM A10(Q11)
#include <stdio.h>
//  created on 28/10/22 to convert ferenheit to celcious
int main()
{
    int fahr, celcius;

    printf("enter temp in fahr \n");
    scanf("%d", &fahr);
    celcius = 5.0 / 9.0 * (fahr - 32);
    printf("temperature in celcious is %d\n", celcius);
}