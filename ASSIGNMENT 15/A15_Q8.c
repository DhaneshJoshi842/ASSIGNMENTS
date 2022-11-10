// created on 29/10/22 to print the no of possible arrangement in the selected objects(permutation)
// FORMULA OF PERMUTATION IS n!/(n-r)!
#include <stdio.h>
int permu(n, r);
int main()
{
    int n, r, a;
    printf("enter total objects\n");
    scanf("%d", &n);
    printf("enter no. objects that have to be select\n ");
    scanf("%d", &r);
    a = permu(n, r);
    printf("possible arrangements are %d", a);
}
int permu(n, r)
{
    int nfact = 1, NminusRfact = 1, b = n - r;
    for (int i = 1; i <= n; i++)
    {
        nfact = nfact * i;
    }

    for (int i = 1; i <= b; i++)
    {
        NminusRfact = NminusRfact * i;
    }
    return (nfact) / (NminusRfact);
}
