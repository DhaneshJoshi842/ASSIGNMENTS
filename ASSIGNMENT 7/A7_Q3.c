#include<stdio.h>
//created by Dhanesh on 4/10/22 to print success and fail on the basis of condition
int main()
{int a;
printf("enter value between 1 to 100\n");
scanf("%d",&a);
if(a>=0&&a<50)
{printf("SUCCESS");}
if(a>=50&&a<100)
{printf("FAIL");}


}