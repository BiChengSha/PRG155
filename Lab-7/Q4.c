/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 9, 2016
Description: Q4: Using a nested loop to collect marks
*/

#include<stdio.h>

int main(){

   puts("Test??"); 
   
   int numStudents, sumOfMarks = 0; 
   float totalCountMarks = 0, mark, average;
   
   puts("Enter total number of students: "); 
   scanf("%d", &numStudents); 
   fflush(stdin); 
   
   for(int countStudents = 1; countStudents <= numStudents; countStudents++){
      printf("Enter first mark for student %d. Enter 999 to exit/skip. \n", countStudents);
      scanf("%f", &mark); 
      fflush(stdin); 
      
      while(mark != 999.0){
         sumOfMarks = sumOfMarks + mark;
         totalCountMarks = totalCountMarks + 1.0;
         puts("Enter another mark. Enter 999 to exit."); 
         scanf("%f", &mark); 
         fflush(stdin); 
      }
      
      average = sumOfMarks / totalCountMarks;
      printf("Average mark for student %d is %.2f.\n\n", countStudents, average); 
      
      printf("Press any key to continue..."); 
      getch();
      system("cls"); 
      
      average = 0;
      sumOfMarks = 0;
      totalCountMarks = 0;
   }
      
   return(0);
   
}
