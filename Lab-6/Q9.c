/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 3, 2016
Question: 9 (10 in the PDF due to #5 being skipped)
*/


#include<stdio.h>

int main(){
   
   int number, placehold;
   
   puts("Enter an integer: "); 
   scanf("%i", &number); 
   
   printf("Your number has been reversed to: "); 
   
   while(number != 0){
      placehold = number%10;
      number = number/10;
      printf("%i", placehold); 
   }
   
   
   return(0);
   
}
