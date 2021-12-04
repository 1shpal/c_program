#include<stdio.h>
int voting(int);
int main(){
    int n,x;
    printf("Enter youre age  \n");
    scanf("%d",&n);
    x = voting(n);
    if (x==0)
      printf(" you are Eligible for voting  \n");

    else
      printf("you are not Eligible for voting");
 return 0;
}
int voting (int n){
    if(n>=18)
     return 0;
     return 1;
}