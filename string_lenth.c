// find string Length

#inclue<stdio.h
 void string_lenth(){
     char s1[] = "TajMahal";
   int i = 0;
      
   while(s1[i] != '\0') {
      i++;
   }
   
   printf("Length of string '%s' is %d", s1, i);
   
 }

int main() {
   string_lenth();
   return 0;
}