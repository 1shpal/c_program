// 5 subject %
#include<stdio.h>
#include<conio.h>
void main()
{
    int s1,s2,s3,s4,s5,total=500,sum=0;
    float per;
    clrscr();
    printf("Enter Marks of 5 Subjects: ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    sum=s1+s2+s3+s4+s5;
    printf("Sum of 5 Subjects is: %d\n",sum);
    per=(sum*100)/total;
    printf("Percentage is: %f",per);
    getch();
}