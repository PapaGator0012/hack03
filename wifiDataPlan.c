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
    printf("Monetlhy limit met");

}
 // it used gbs is not ZERO 
else if (usedGB!=0){

    dataOutrun=daysRemaining*dailyusage;
    datalimit=GBremaining/ daysRemaining;

    printf(" days used = %f , days remaining = %f",days,daysRemaining);
    printf("Average daily used = %f ",dailyusage);
    printf("if data used on %f /GB/day , then it will exceed on %f",dailyusage,dataOutrun);
    printf("\n");
    printf("Use data only %d /GB/day or you data plan reached its limit",datalimit);
}







    return 0;
}
