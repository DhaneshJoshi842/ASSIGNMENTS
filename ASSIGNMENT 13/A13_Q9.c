// created on 26/10/22 to find out the roots
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, root2,
        root1;
    printf("enter value of a,b,c\n");
    scanf("%f\n%f\n%f", &a, &b, &c);
    d = b * b - 4 * a * c;
    switch (d == 0)
    {
    case 1:
        root1 = (-b) / (2 * a);
        root2 = root1;
        {
            printf("%f and %f are the roots\n", root1, root2);

            printf("roots are equal");
            break;
        }
    }
    switch (d > 0)
    {
    case 1:
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("%f and %f are the roots\n", root1, root2);
        printf("roots are real");
        break;
    }
    switch (d < 0)
    {
    case 1:
    {
        printf("roots are imaginary\n");
        break;
    }
    }
}