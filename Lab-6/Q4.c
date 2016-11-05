/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 3, 2016
Question: 4
*/


#include<stdio.h>

int main(){
   
   char choice;
   float first, second, answer, output;
   
   do{
      printf("\tMath Practice\n\n"); 
      printf("      a) Multiplication\n"); 
      printf("      b) Division\n"); 
      printf("      c) Exit\n\n"); 
      puts("Select a, b, or c: "); 
      scanf("%c", &choice);
      fflush(stdin);
      
      switch(choice){
         case 'a':
         case 'A':
            system("cls");
            puts("You have selected MULTIPLICATION."); 
            printf("Enter first number: "); 
            scanf("%f", &first);
            fflush(stdin);
            printf("Enter second number: "); 
            scanf("%f", &second);
            fflush(stdin);
            printf("What is %.2f multiplied by %.2f?", first, second); 
            scanf("%f", &answer);
            fflush(stdin);
            output = first*second;
            
            system("cls"); 
            
            if(answer == output){
               printf("Correct. %.2f multiplied by %.2f is equal to %.2f", first, second, answer); 
            } else {
               printf("Incorrect. %.2f multiplied by %.2f is equal to %.2f", first, second, output); 
            }
            
            printf("\n\nPress [ENTER] to continue...");
            fflush(stdin);
            getchar();
            system("cls");
            
            break;
            
         case 'b':
         case 'B':
            system("cls");
            puts("You have selected DIVISION."); 
            printf("Enter first number: "); 
            scanf("%f", &first);
            fflush(stdin);
            printf("Enter second number: "); 
            scanf("%f", &second);
            fflush(stdin);
            printf("What is %.2f divided by %.2f?", first, second); 
            scanf("%f", &answer);
            fflush(stdin);
            output = first/second;
            
            system("cls"); 
            
            if(answer == output){
               printf("Correct. %.2f divided by %.2f is equal to %.2f", first, second, answer); 
            } else {
               printf("Incorrect. %.2f divided by %.2f is equal to %.2f", first, second, output); 
            }
            
            printf("\n\nPress [ENTER] to continue...");
            fflush(stdin);
            getchar();
            system("cls");
            
            break;
            
         case 'c':
         case 'C':
            
            break;
         default:
            puts("Invalid entry. Try again. Press [ENTER] to continue..."); 
            fflush(stdin);
            getchar();
            system("cls"); 
            break;
      }
      
   } while (choice != 'c');
   
   return(0);
   
}
