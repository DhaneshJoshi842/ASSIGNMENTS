#include<stdio.h>
/*creator-Dhanesh Joshi
date-5/10/22
aim-to calculate the profit and loss percentage*/
int main()
{float CP,SP,PP,LP;//where CP-cost price,SP-selling price,PP-profit percentage
// LP-loss prcentage
printf("enter cost price\n"); 
scanf("%f",&CP);
printf("enter sell price\n");
scanf("%f",&SP);
PP=(SP-CP)/(CP)*100;
LP=(CP-SP)/(CP)*100;
printf("profit percentage %f\n",PP);
printf("loss percentage is %f\n",LP);
}
