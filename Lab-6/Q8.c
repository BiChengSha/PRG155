/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 3, 2016
Question: 8 (9 in the PDF due to #5 being skipped)
*/


#include<stdio.h>

int main(){
   
   int choice;
   char letter;
   
   puts("Enter a lower case letter: "); 
   scanf("%c", &letter); 
   
   if(letter >= 'a' && letter <= 'z'){
      letter = letter - 32;
      printf("Your lower case letter in capital is %c\n\n", letter); 
   } else if (letter >= 'A' && letter <= 'Z'){
      printf("Your letter (%c) is already a capital letter.\n\n", letter); 
   } else {
      puts("You did not enter a lower case letter."); 
   }
   
   puts("Press any key to continue..."); 
   getch();
   
   system("cls"); 
   fflush(stdin); 
   
   do{
      puts("Do you want to enter another letter? Enter 0 for yes, and -1 for no: "); 
      scanf("%i", &choice);
      
      if (choice != 0) break;
      
      fflush(stdin); 
      
      system("cls"); 
      
      puts("Enter a lower case letter: "); 
      scanf("%c", &letter); 
      fflush(stdin); 
      
      if(letter >= 'a' && letter <= 'z'){
         letter = letter - 32;
         printf("Your lower case letter in capital is %c\n\n", letter); 
      } else if (letter >= 'A' && letter <= 'Z'){
         printf("Your letter (%c) is already a capital letter.\n\n", letter); 
      } else {
         puts("You did not enter a lower case letter. "); 
      }
      
      puts("Press any key to continue..."); 
      getch();
      
      system("cls"); 
      fflush(stdin); 
      
   } while (choice == 0);
   
   printf("Program will exit. Press any key to continue..."); 
   getch();
   
   return(0);
   
}
