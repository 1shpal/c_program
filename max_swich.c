// Find the maximum between two numbers using the switch case.
#include <stdio.h>
int main (){
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    if (a==b)
          printf("both numbers are equal\n");
    else
    {
    switch (a>b)
    {
    case 1: 
        printf("%d is greater numbrer\n",a);
        break;
    
    case 0: 
        printf("%d is greater numbrer\n",b);

        break;
    default:
        
        break;
    }

    }
}