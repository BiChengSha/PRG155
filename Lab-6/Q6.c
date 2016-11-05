/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 3, 2016
Question: 6 (7 in the PDF due to #5 being skipped)
*/


#include<stdio.h>

int main(){
   
   int input, sum = 0;
   float average, count = 0.0;
   
   printf("Enter an integer: "); 
   scanf("%i", &input); 
   
   while(input != -999){
      printf("\nInput: %i", input); 
      sum = sum + input;
      printf("\nSum: %i", sum); 
      count = count + 1.0;
      printf("\nCount: %3.0f", count); 
      printf("\nEnter another integer: ");  
      scanf("%i", &input); 
      system("cls"); 
   }
   
   average = sum/count;
   
   printf("The average of all values entered is %.2f.", average); 
  
   
   return(0);
   
}
