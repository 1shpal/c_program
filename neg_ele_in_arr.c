//	Print all negative elements in an array.
#include<stdio.h>
int main(){
    int a[]={1,2,-3,-3,4,-6,-9,7,8};
    for(int i=0;i<9;i++){
        if (a[i]<0)
         printf("%d\n",a[i]);
    }
}