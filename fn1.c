//	The number Is Positive or Negative
#include<stdio.h>
void positivenegetive(int);
int main(){
  int n;
  printf("enter any number to chack whether it is positive or negetive\n");
  scanf("%d",&n);
  positivenegetive(n);
  return 0;
}
void positivenegetive(int n){
  if(n>0)
   printf("%d is a positive number\n",n);
   else
   printf("%d is a negetive number\n",n);

}


