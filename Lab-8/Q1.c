/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 21, 2016
*/


#include<stdio.h>
#include<windows.h>

void delay(int wait);

int main(){
   
   puts("Currently in main() function"); 
   printf("The number entered is %i\n", getNum());
   puts("Press any key to continue...");
   getch(); 
}


int getNum(){
   
   int entered;
   
   puts("Currently in getNum() function"); 
   puts("Enter a number: "); 
   scanf("%i", &entered); 
   
   return entered;
}