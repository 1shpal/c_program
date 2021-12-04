// compire two string
#include <stdio.h>
void com_str(){
       char s1[] = "vansh";     
   char s2[] = "vansh";
    
   int n = 0;
   unsigned short flag = 1; 
    
   while (s1[n] != '\0') {
      if(s1[n] != s2[n]) {
         flag = 0;
         break;
      }
      n++;
   }
    
   if(flag == 1) {
      printf("%s and %s are identical\n", s1, s2);
   } else {
      printf("%s and %s are NOT identical\n", s1, s2);
   }


}

int main() {
  com_str(); 
   return 0;
}