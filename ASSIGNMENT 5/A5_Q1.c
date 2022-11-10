#include<stdio.h>
//created by dhanesh joshi on 7/10/22 to calculate gross salary
int main()
{float BS,GS,DA,HA;// BS-basic sallary,GS-gross salary,DA-dearnes allowence,HA-house rent allowence
printf("enter basic sallry\n");
scanf("%f",&BS);
DA=50*BS/100;
HA=20*BS/100;
GS=BS+DA+HA;
printf("gross salarry is %f",GS);

}