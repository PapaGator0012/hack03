#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()

// Program to compute and montor user's internet data packages


{

float days,totalGB,usedGB,daysRemaining,dailyusage,dataOutrun,GBremaining,datalimit;

printf("Enter your GB's for your 30 Days plan : ");
scanf("%f",&totalGB);

printf("enter the present day from the 30 days plan : ");
scanf("%f",&days);

printf(" the amount of GBs used till present day : ");
scanf("%f",&usedGB);

// formulas 

daysRemaining = 30 - days;
GBremaining = totalGB - usedGB;
datalimit= GBremaining / daysRemaining ;
dailyusage= usedGB /days;

// using a conditional statement to print if the user has run out of PACKAGE 

if ( datalimit==0){

    printf(" Days used = %f , Days remanining = %f",days,daysRemaining);
    printf("\n");
    printf(" avg Daily usage = %f GB/day",dailyusage);
    printf("\n");
    printf("Your monthly data limit has diminished, please recharge !");
    
}








    return 0;
}
