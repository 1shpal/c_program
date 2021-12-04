//copy string 
#include <stdio.h>
void copy_string(){
    
   char s1[] = "VanshPal";   
   char s2[8];              

   int length = 0;

   while(s1[length] != '\0') {
      s2[length] = s1[length];
      length++;
   }

   s2[length] = '\0';      

   printf("Value in s1 = %s \n", s1);
   printf("Value in s2 = %s \n", s2);

}

int main() {
   copy_string();
   return 0;
}