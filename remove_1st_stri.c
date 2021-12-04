// remove first occaring
#include<stdio.h>
#include<string.h>
 void removefirst(char *a,char *b){
     int i,j;
     for(i=j=0;a[i];i++)
     {
         if(a[i]==b[j])
         j++;
         else if (a[i]==b[0])
         j=1;
         else
         j=0;
         if(b[j]==\0)
         { 
             for(i=i+1-j;a[i]=a[i+j;i++]);
             break;
         }
     }
 }
 void main(){
     char a[100],b[100];
     gets(a);
     gets(b);
     printf("%s\n",removefirst(a,b));
     printf("%s\n",a    )
 }