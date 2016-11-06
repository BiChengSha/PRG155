/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 3, 2016
Question: 3
*/


#include<stdio.h>

int main(){

   int timesToGo, count = 1;
   
   puts("Enter an integer: "); 
   scanf("%i", &timesToGo);
   
   while(count <= timesToGo){
      if(count == 1){
         printf("The loop has run %i time.\n", count); 
      } else {
         printf("The loop has run %i times.\n", count); 
      }
      count++;
   }
   
   return(0);
   
}
