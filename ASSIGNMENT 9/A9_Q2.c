#include<stdio.h>
/*creator-Dhanesh Joshi
date-5/10/22
aim-to show result of 5 subjects to user*/
int main()
{float percent,math,physics,chemistry,hindi,english,TM;
printf("enter your hindi marks\n");
scanf("%f",&hindi);
if(hindi>=33)
{printf("pass\n");}
else{printf("fail\n");}
printf("enter you english marks\n");
scanf("%f",&english);
if(english>=33)
{printf("pass\n");}
else{printf("fail\n");}
printf("enter your physics marks\n");
scanf("%f",&physics);
if(physics>=33)
{printf("pass\n");}
else{printf("fail\n");}
printf("enter your chemistry marks\n");
scanf("%f",&chemistry);
if(chemistry>=33)
{printf("pass\n");}
else{printf("fail\n");}
printf("enter your mathematics marks\n");
scanf("%f",&math);
if(math>=33)
{printf("pass\n");}
else{printf("fail\n");}
TM=math+hindi+english+physics+chemistry;
if(TM>=165)
{printf("your total marks are %f",TM);}
else{printf("fail");}
}
