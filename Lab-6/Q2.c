/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 3, 2016
Question: 2
*/


#include<stdio.h>

int main(){
   
   int inputInt, intTotal = 0;
   
   do {
      puts("Enter an integer: "); 
      scanf("%i", &inputInt);
      intTotal = intTotal + inputInt;
   } while (inputInt != 5);
   
   printf("Sum of all entered integers = %i", intTotal); 
   
   return(0);
   
}
