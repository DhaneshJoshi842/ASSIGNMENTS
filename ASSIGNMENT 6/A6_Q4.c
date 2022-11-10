#include<stdio.h>
//created by dhanesh joshi to convert the km into cm,mm,imch
int main()
{float a,b,c,d;
printf("enter the distance between any two cities in km\n");
scanf("%f",&a);
b=a*100000;
c=b*10;//1cm=10mm
d=a*4000;
printf("the distance between these two cities in cm is %f\n",b);
printf("the distance between two cities in mm is %f\n",c);
printf("the distance between these two cities in inch is %f",&d);




}

