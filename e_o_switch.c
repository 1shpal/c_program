//C program to check whether number is EVEN using switch
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1=450;
 
switch(num1%2){
case 0:
    printf("%d is a even number",num1);
    break;
case 1:
    printf("%d is a odd number",num1);
}
getch();
    return 0;
}