// Sum of all array elements. – using recursion.
#include<stdio.h>
int sum_of_arr(int []);
int main(){
    int a[]={1,2,3,5,6,4,6,8};
    int i=0;
    sum_of_arr(a[i]);
}
int sum_of_arr(int a[i]){
    int sum ,i;
    if(i==8){
        printf("the sum of array element is %d \n",sum);
    }
    sum=sum+a[i];
    sum_of_arr(a[++i]);
}