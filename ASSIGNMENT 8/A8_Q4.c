#include<stdio.h>
//created by dhanesh on 5/10/22 to cheq that wheather a given number is divisible by 7 or 3
int main ()
{int a;
printf("enter any number\n");
scanf("%d",&a);
if(a%3==0)
{printf("number is divisible by 3");}
else if(a%7==0)
{printf("number is divisible by 7");}
else{printf("number is eighter divisible by 3 and nor by 7");}

}