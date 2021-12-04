#include<stdio.h>
 int assci(char *p);
 int main(){
   char ch,*p;
   int x,*q;
   p=&ch;
   q=&x;
   printf("enter any charecter to chack its assci value\n");
   scanf("%c",p);
   *q= assci(*p);
   printf("assci value of %c is %d ",*p,*q);
}
int assci(char *p){
    return *p;
}