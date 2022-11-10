#include<stdio.h>
//created by dhanesh joshi to convert the km into m,cm,mm
int main()
{float a,b,c,d;
printf("enter the distance between any two cities in km\n");
scanf("%f",&a);
b=a*1000;
c=b*100;
d=c*10;//1cm=10mm
printf("the distance between these two cities in m is %f\n",b);
printf("the distance between two cities in cm is %f\n",c);
printf("the distance between these two cities in mm is %f",&d);




}