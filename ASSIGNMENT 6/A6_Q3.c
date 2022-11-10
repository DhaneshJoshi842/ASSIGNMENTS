#include<stdio.h>
int main()
{int a,b,c;
printf("enter value of a\n");
scanf("%d",&a);
printf("enter value of b\n");
scanf("%d",&b);
printf("enter value of c between 0 to 5\n");
scanf("%d",&c);
if(c==1)
{printf("%d",a+b);}
else if(c==2)
{printf("%d",a-b);}
else if(c==3)
{printf("%d",a*b);}
else if(c==4)
{printf("%d",a/b);}



}