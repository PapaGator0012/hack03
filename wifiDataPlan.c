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










    return 0;
}
