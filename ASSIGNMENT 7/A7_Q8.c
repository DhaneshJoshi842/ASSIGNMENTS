#include<stdio.h>
//created by Dhanesh Joshi on 5/10/22 to cheq that the roots of the given equation are real or not
int main()
{float root1,root2,d;
printf("ENTER root1\n");
scanf("%f",&root1);
printf("ENTER root2\n");
scanf("%f",&root2);
d=(root1+root2)*(root1+root2)-4*1*(root1*root2);//because format of quadratic equation is x^2-(root1+root2)+(root1*root2)
printf("value of d is %f\n",d);
if(d>0)
{printf("roots are real and distinct");}
else if(d<0)
{printf("roots are imaginary");}
else if(d==0)
{printf("roots are real and equal");}



}