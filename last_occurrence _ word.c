// C program to find last occurrence of a word in given string
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 

int main()
{
    char str[MAX_SIZE];
    char word[MAX_SIZE];
    int i, j, found;
    int strLen, wordLen;
    printf("Enter any string: ");
    gets(str);
    printf("Enter any word to search: ");
    gets(word);

    strLen  = strlen(str);  
    wordLen = strlen(word); 

    for(i=0; i<strLen - wordLen; i++)
    {
        found = 1;
        for(j=0; j<wordLen; j++)
        {
           if(str[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }
        if(found == 1)
        {
            printf("'%s' found at index: %d \n", word, i);
        }
    }

    return 0;
}
