#include<stdio.h>
int main(){
    int n ;

    printf("Enter any number b/w 1to7\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1: printf("monday\n");
        break;
    case 2: printf(" tuesday\n");
        break;
    case 3: printf("wednesday\n");
        break;
    case 4: printf("thirsday\n");
        break;
    case 5: printf("friday\n");
        break;
    case 6: printf("seterday\n");
        break;
    case 7: printf("sunday\n");
        break;
    default:
        break;
    }
    return 0;
}