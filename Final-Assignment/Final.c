/*
Name: BiCheng Sha
Date: November 9, 2016
Class: PRG155-NGH
Description: Final project - Create a program to draw a building with a door on ground floor and windows on all floors
*/

/* STUDENT OATH:
I declare that the attached assignment is wholly my own work in accordance
with Seneca Academic Policy. No part of this assignment has been copied
manually or electronically from any other source (including web sites) or
distributed to other students.
*/

#include<stdio.h>

//Function Declarations
int getValidData(int low, int high, char type); //Validating user inputs
void drawUpperFloors(int numOfWindows); //Drawing all but ground floors with specified number of windows
void drawGroundFloor(int numOfWindows); //Drawing only the ground floor with specified numbers of windows and doors

int main(){ //Main function to call up other functions and main logic

   //Constant Declarations
   const int floorMin = 1;
   const int floorMax = 1000;
   const int windowMin = 1;
   const int windowMax = 20;
   
   //Variable Declarations
   int numFloors, numWindows;
   
   //Function calls: Getting user input data
   numFloors = getValidData(floorMin, floorMax, 'f');
   numWindows = getValidData(windowMin, windowMax, 'w');
   
   //Function calls: drawing out the builing
   if(numFloors > 1){
      for(int buildFloors = 2; buildFloors <= numFloors; buildFloors++){
         drawUpperFloors(numWindows);
      }
      drawGroundFloor(numWindows);
   } else if (numFloors == 1){
      drawGroundFloor(numWindows);
   }
   
   return (0);
}  //End main function

//begin getValidData function
int getValidData(int low, int high, char type){ //Validating user inputs
   
   int userInput;
   
   if(type == 'w'){  //checking for number of windows
   
      puts("Enter the number of windows: "); /////////////////////////////////////
      scanf("%d", &userInput);               //////Getting number of windows//////
      fflush(stdin);                         /////////////////////////////////////
      
      while(userInput < low || userInput > high){
         printf("Invalid value for number of windows (%d). Enter again: ", userInput);    //forcing user to re-enter if invalid
         scanf("%d", &userInput); 
         fflush(stdin); 
      }
   } else if (type == 'f'){   //checking for number of floors
   
      puts("Enter the number of floors: ");  ////////////////////////////////////
      scanf("%d", &userInput);               //////Getting number of floors//////
      fflush(stdin);                         ////////////////////////////////////
      
      while(userInput < low || userInput > high){
         printf("Invalid value for number of floors (%d). Enter again: ", userInput);     //forcing user to re-enter if invalid
         scanf("%d", &userInput); 
         fflush(stdin); 
      }
   }
   return(userInput);
}  //end getValidData function

//begin drawUpperFloors function
void drawUpperFloors(int numOfWindows){ //Drawing all but ground floors with specified number of windows 

   //First line
   printf("+--");
   for(int i = 1; i <= numOfWindows; i++){ 
      printf("----"); 
   }
   printf("-+\n"); 
   
   //Second Line
   printf("|  "); 
   for(int i = 1; i <= numOfWindows; i++){ 
      printf("    "); 
   }
   printf(" |\n"); 
   
   //Third Line
   printf("| "); 
   for(int i = 1; i <= numOfWindows; i++){ 
      printf(" ==="); 
   }
   printf("  |\n"); 
   
   //Fourth Line
   printf("| "); 
   for(int i = 1; i <= numOfWindows; i++){ 
      printf(" | |"); 
   } 
   printf("  |\n"); 
   
   //Fifth Line
   printf("| "); 
   for(int i = 1; i <= numOfWindows; i++){ 
      printf(" ==="); 
   }
   printf("  |\n");
   
   //Sixth Line
   printf("|  "); 
   for(int i = 1; i <= numOfWindows; i++){ 
      printf("    "); 
   }
   printf(" |\n");
   
}  //end drawUpperFloors function

//begin drawGroundFloor function
void drawGroundFloor(int numOfWindows){ //Drawing only the ground floor with specified numbers of windows and doors
   
   //First Line
   printf("+--");
   for(int i = 1; i <= numOfWindows; i++){ 
      printf("----"); 
   }
   printf("-+\n"); 
   
   //Second Line
   printf("|  "); 
   for(int i = 1; i <= numOfWindows; i++){ 
      printf("    "); 
   }
   printf(" |\n"); 
   
   //Third Line
   printf("|  ===");
   if(numOfWindows > 1){
      for(int i = 2; i <= numOfWindows; i++){ 
         printf(" ==="); 
      }
   }
   printf("  |\n");
   
   //Fourth Line
   printf("|  | |");
   if(numOfWindows > 1){
      for(int i = 2; i <= numOfWindows; i++){ 
         printf(" | |"); 
      }
   }
   printf("  |\n");
   
   //Fifth Line
   printf("|  | |"); 
   if(numOfWindows > 1){
      for(int i = 2; i <= numOfWindows; i++){ 
         printf(" ==="); 
      }
   }
   printf("  |\n");
   
   //Sixth Line
   printf("|  | |");
   if(numOfWindows > 1){
      for(int i = 2; i <= numOfWindows; i++){ 
         printf("    "); 
      }
   }
   printf("  |\n");
   
   //Seventh Line
   printf("***");
   for(int i = 1; i <= numOfWindows; i++){ 
      printf("****"); 
   }
   printf("**\n");
   
}//end drawGroundFloor function

//End Final Project
