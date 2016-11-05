/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 3, 2016
Question: 5 (6 in the PDF because 5 was skipped)
*/


#include<stdio.h>

int main(){
   
   int years;
   float start, intRate, interest, afterInt;
   
   printf("Enter your starting balance: "); 
   fflush(stdin);
   scanf("%f", &start); 
   printf("\nNumber of years deposited: "); 
   fflush(stdin);
   scanf("%i", &years); 
   printf("\nInterest rate (%%): "); 
   fflush(stdin);
   scanf("%f", &intRate);
   
   printf("End of\t\tStarting\tInterest\tEnd of Year\n  Year\t\tBalance\t\tPaid\t\tBalance\n"); 
   
   for (int i = 1; i <= years; i++){
      interest = start * (intRate*0.01);
      afterInt = start + interest;
      printf("%i\t\t$%6.2f\t$%6.2f\t\t$%6.2f\n", i, start, interest, afterInt); 
      start = afterInt;
   }
   
   
   return(0);
   
}
