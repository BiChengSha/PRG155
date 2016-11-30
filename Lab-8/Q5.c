/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 21, 2016
*/

#include<stdio.h>

char firstFunction(int numInput);
void secondFunction(int numInput, char charInput);

int main(){
   
   int firstNum;
   
   puts("In main() function"); 
   
   puts("Enter an integer: ");
   scanf("%i", &firstNum);
   fflush(stdin); 
   
   firstFunction(firstNum);
   
   puts("Back to main() function");
   puts("Press any key to continue...");
   getch();  
   
}

char firstFunction(int numInput){
   
   char userChar;
   puts("In firstFunction()"); 
   puts("Enter a character"); 
   //fflush(stdin);
   getchar();
   scanf("%c", &userChar);

   
   secondFunction(numInput, userChar);
   
   return userChar;
}


void secondFunction(int numInput, char charInput){
   puts("In secondFunction()"); 
   printf("The number entered in main() is: %i\n", numInput);
   printf("The character entered in firstFunction() is: %c\n", charInput);  
}