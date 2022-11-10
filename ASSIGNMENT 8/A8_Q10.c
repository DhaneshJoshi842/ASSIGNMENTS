#include<stdio.h>
//created on 10/10/22 to print day a of a week when ever week number is entered
int main()
{int wn;
printf("enter week number\n");
scanf("%d",&wn);
if(wn==1)
{printf("monday");}
else if(wn==2)
{printf("tuesday");}
else if(wn==3)
{printf("wednesday");}
else if(wn==4)
{printf("thruesday");}
else if(wn==5)
{printf("friday");}
else if(wn==6)
{printf("satuarday");}
else if(wn==7)
{printf("sunday");}
else{printf("week number couldn't found");}


}