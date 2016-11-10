/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 9, 2016
Description: Q3: Using a nested loop to print another table
*/

#include<stdio.h>

int main(){
   
   float voltLo = 0, voltHi = 50, voltInc = 10, resistLo = 100, resistHi = 1000, resistInc = 200, current;
      
   printf("\t\t"); //formatting purposes
   
   for(int row = resistLo; row <= resistHi; row = row + resistInc){ //Formatting the row header
         printf("%5d ohms\t", row); //output row header
   }
   
   printf("\n\n\n"); //formatting purposes
   
   for(float col = voltLo; col <= voltHi; col = col + voltInc){ //create columns
      printf("%2.0f Volts\t", col); //output column header
      for(float row = resistLo; row <= resistHi; row = row + resistInc){ //create row
         current = col/row;
         printf("%7.2f mA\t", current*1000); //output multiplied values
      }
      puts(""); //formatting purposes
   }
      
   return(0);
   
}
