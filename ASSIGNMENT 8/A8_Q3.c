
#include<stdio.h>
//created by dhanesh on 5/10/22 to identify that wheather the given numbers are divisible by 2 or 3
int main()
{int a;
printf("enter any number\n");
scanf("%d",&a);
if(a%2==0)
{printf("number is divisible by 2");}
else if(a%3==0)
{printf("number is divisible by 3");}
else{printf("number is eigther divisible by 3 and nor by 2");}
}