#include <stdio.h>
#include <string.h>
int main() {
   char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;
   char str[10];

   printf("Enter your keyword: ");
   scanf("%s", str);
   
   int match=0,i;
   for(i = 0; i < 32; i++) {
      if(strcmp(str,keyword[i])==0) {
         match=5;
      }
   }
   if(match==5)
      printf("%s is a keyword",str);
   else
      printf("%s is not a keyword",str);
}