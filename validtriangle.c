// Input all sides of a triangle and check whether the triangle is valid or not.
#include <stdio.h>
int validtriangle(float,float,float);
int main(){
    float a,b,c,x;
    printf("Enter all three angle of triangle\n");
    scanf("%f%f%f",&a,&b,&c);
    x=validtriangle(a,b,c);
    if (x==0)
      printf(" the triangle is valid  \n");

    else
      printf("the triangle is not valid \n");
 return 0;
}
int validtriangle(float a,float b,float c){
    if(a+b+c==180)
      return 0;
      return 1;
}