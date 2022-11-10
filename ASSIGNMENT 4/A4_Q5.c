#include<stdio.h>
//created by dhanesh to find out the gross salary of ramesh
int main()
{float a,allowence,gs;
printf("enter basic salary\n");
scanf("%f",&a);
allowence=(a)/(100)*40;//given
gs=a+allowence;
printf("ramesh gross salery is %f",gs);


}