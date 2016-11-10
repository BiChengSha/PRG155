/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 9, 2016
Description: Q2: Using a nested loop to print another table
*/

#include<stdio.h>

int main(){
   
   int colLo, colHi, colInc, rowLo, rowHi, rowInc;
   
   puts("Enter lowest number for column: "); 
   scanf("%d", &colLo); 
   fflush(stdin); 
   puts("Enter highest number for column: "); 
   scanf("%d", &colHi); 
   fflush(stdin); 
   puts("Enter increment value for column: "); 
   scanf("%d", &colInc); 
   fflush(stdin); 
   puts("Enter lowest number for row: "); 
   scanf("%d", &rowLo); 
   fflush(stdin); 
   puts("Enter hghest number for row: "); 
   scanf("%d", &rowHi); 
   fflush(stdin); 
   puts("Enter increment value for row: "); 
   scanf("%d", &rowInc); 
   fflush(stdin); 
   
   printf("\t\t"); //formatting purposes
   
   for(int row = rowLo; row <= rowHi; row = row + rowInc){ //Formatting the row header
         printf("%5d\t", row); //output row header
   }
   
   printf("\n\n\n"); //formatting purposes
   
   for(int col = colLo; col <= colHi; col = col + colInc){ //create columns
      printf("%5d\t\t", col); //output column header
      for(int row = rowLo; row <= rowHi; row = row + rowInc){ //create row
         printf("%5d\t", col*row); //output multiplied values
      }
      puts(""); //formatting purposes
   }
      
   return(0);
   
}
