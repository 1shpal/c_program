#include<stdio.h>
int leapyear(int);
int main(){
    int n,x;
    printf("Enter any year to chak it is leap year or not ..\n");
    scanf("%d",&n);
    x = leapyear(n);
    if (x==0)
      printf("%d is a leap year \n",n);
    else
      printf("%d is not a leap year\n",n);
 return 0;
}
int leapyear (int n){
    if(n%4==0)
     return 0;
     return 1;
}