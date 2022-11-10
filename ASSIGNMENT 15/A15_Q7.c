// created on 29/10/22 to find out the no. of ways of selection of objects(combination)
// FORMULA FOR COMBINATION IS (n!)/(r!(n-r)!)
#include <stdio.h>
int combi(n, r);
int main()
{
    int n, r, a;
    printf("from how many objects selection is done(n)\n"); // total objects
    scanf("%d", &n);
    printf("how many objets has to be seleced(r)\n"); // selected objects from total objects
    scanf("%d", &r);
    a = combi(n, r);
    printf("no of combinations are %d", a);
}
int combi(n, r)
{
    int nfact = 1, rfact = 1, NminusRfact = 1;
    for (int i = 1; i <= n; i++)
    {
        nfact = nfact * i;
    }
    for (int i = 1; i <= r; i++)
    {
        rfact = rfact * i;
    }
    int x = n - r;
    for (int i = 1; i <= x; i++)
    {
        NminusRfact = NminusRfact * i;
    }
    return (nfact) / (rfact * NminusRfact);
}
