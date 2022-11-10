 #include<stdio.h>
//created by dhanesh on 5/10/22 to find out the gratest number among 3 number
int  main()
{int a,b,c;
printf("enter a\n");
scanf("%d",&a);
printf("enter b\n");
scanf("%d",&b);
printf("enter c\n");
scanf("%d",&c);
if(a>b&&a>c)
{printf("%d",a);}
else if(b>a&&b>c)
{printf("%d",b);}
else if (c>a&&c>b)
{printf("%d",c);}



}
