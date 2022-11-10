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
printf("your totalmarks are %f\n",TM);
printf("IF you are passed out all of the subject then promoted further otherwise not\n");
percent=(math+hindi+english+physics+chemistry)/(500)*100;
printf("your total percentage is %f\n",percent);
if(percent>=75)
{printf("first division passed");}
else if(percent<75&&percent>=50)
{printf("second division passed");}
else if(percent<50&&percent>=33)
{printf("third division passed");}
else{printf("fail");}
}