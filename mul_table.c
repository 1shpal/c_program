//	Print Multiplication Table Using
#include<stdio.h>
 void mul_table(int a){
     int x=0;
     for(int i=1;i<=10;i++){
         x=0;
         x=a*i;
         printf("%d\n",x);
         
     }
}
int main(){
    int n;
    printf("enter any number \n");
    scanf("%d",&n);
    mul_table(n);
    return 0;
}