
#include<stdio.h>
int main(){
    int n,k;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter any number\n");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
       k=arr[i]*n;
       printf("%d\n",k);
    }
}