/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 21, 2016
*/


#include<stdio.h>
#include"Calculation.c"


int main(void){
   
   float rad;
   puts("Enter the radius of a sphere to calculate its volume: "); 
   scanf("%f", &rad); 
   
   printf("The volume of your sphere is: %.2f.", calcVolume(rad));
   
   return 0;
}
