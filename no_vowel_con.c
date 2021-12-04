// Number of Vowel and Consonants
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    printf("Please Enter String\n");
    fgets(str,1000,stdin);
    int i,count=0,count1=0;
    for(i=0; str[i]!='\0'; i++){
        if ((str[i]=='a'||str[i]=='A')||(str[i]=='e'||str[i]=='E')||(str[i]=='i'||str[i]=='I')||(str[i]=='o'||str[i]=='O')||(str[i]=='u'||str[i]=='U')){
            count++;
        }
        else
        count1++;   
    }
    printf("Number of Vowel:%d\n",count);
    printf("Number of Consonants:%d\n",count1);

    return 0;
}