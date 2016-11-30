/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 21, 2016
*/

#include<stdio.h>

char convertCase(char lower);

int main(){
   
   char input;
   puts("Currently in main() function."); 
   puts("Enter a lowercase character: ");
   scanf("%c", &input);
   
   if(input >= 'a' && input <= 'z'){
      printf("Your letter converted to capital is: %c\n", convertCase(input));
      puts("Press any key to continue..."); 
      getch();
   } else {
      puts("Not a lowercase character. Press any key to exit...");
      getch(); 
   }
}

char convertCase(char lower){
   
   puts("Inside convertCase() function. "); 
   
   char upper;
   
   upper = lower - 32;
   
   return upper;
}
