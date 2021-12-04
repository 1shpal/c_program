//	Print total number of days in a month using switch case.
#include<stdio.h>
 int main(){
     int n;
     printf("Enter a month number \n");
     scanf("%d",&n);
     switch (n)
     {
     case 1:
        printf("Thire are 31 days in 1st month\n");
         break;
     case 2:
        printf("Thire are 28 or 29 days in 2nd month\n");
         break;
     case 3:
        printf("Thire are 31 days in 3rd month\n");
         break;
     case 4:
        printf("Thire are 30 days in 4th month\n");
         break;
     case 5:
        printf("Thire are 31 days in 5th month\n");
         break;
     case 6:
        printf("Thire are 30 days in 6th month\n");
         break;
     case 7:
        printf("Thire are 31 days in 7th month\n");
         break;
     case 8:
        printf("Thire are 31 days in 8th month\n");
         break;
     case 9:
        printf("Thire are 30 days in 9th month\n");
         break;
     case 10:
        printf("Thire are 31 days in 10th month\n");
         break;
     case 11:
        printf("Thire are 30 days in 11th month\n");
         break;
     case 12:
        printf("Thire are 31 days in 12th month\n");
         break;
     
     
     default:
        printf("you have enterd invalide number \n");
         break;
     }
 }