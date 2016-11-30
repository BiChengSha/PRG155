/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 21, 2016
*/

#include<stdio.h>

float multiply(float in1, float in2);

int main(){
   
   float first, second;
   
   puts("Currently in main()"); 
   
   puts("Enter a (decimal) number: ");
   scanf("%f", &first);
   puts("Enter another (decimal) number: ");
   scanf("%f", &second);
   printf("The product of the two numbers entered is %.2f\n", multiply(first, second)); 
   puts("Press any key to continue..."); 
   getch();
}

float multiply(float in1, float in2){

   puts("Inside multiply() function."); 
   
   float product;
   
   product = in1 * in2;
   
   return product;
}
