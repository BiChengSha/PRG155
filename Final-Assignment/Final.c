/*
Name: BiCheng Sha
Date Begin: November 9, 2016
Date Finish: November 12, 2016
Class: PRG155-NGH
Description: Final project - Create a program to draw a building with a door on ground floor and windows on all floors
*/

/* STUDENT OATH:
I declare that the attached assignment is wholly my own work in accordance
with Seneca Academic Policy. No part of this assignment has been copied
manually or electronically from any other source (including web sites) or
distributed to other students.

Name: BiCheng Sha     Student ID: #########
*/

#include<stdio.h>

//Function Declarations
int getValidData(int low, int high, char type); //Validating user inputs
void drawUpperFloors(int numOfWindows); //Drawing all but ground floors with specified number of windows
void drawGroundFloor(int numOfWindows); //Drawing only the ground floor with specified numbers of windows and doors

int main(){ //Main function to call up other functions and main logic

   //Constant Declarations
   const int floorMin = 1;    //minimum number of floors
   const int floorMax = 1000; //maximum number of floors
   const int windowMin = 1;   //minimum number of windows
   const int windowMax = 20;  //maximum number of windows
   
   //Variable Declarations
   int numFloors, numWindows; //variables for keeping track of what the user entered for #floors and #windows
   
   //Function calls: Getting user input data
   numFloors = getValidData(floorMin, floorMax, 'f');    //function call to get number of floors and assign the value to the variable
   numWindows = getValidData(windowMin, windowMax, 'w'); //function call to get number of windows and assign the value to the variable
   
   //Function calls: drawing out the builing
   if(numFloors > 1){                  //if the number of floors is greater than 1 then:
      for(int buildFloors = 2; buildFloors <= numFloors; buildFloors++){ //buildFloors = 2 to eliminate the extra floor when ground is drawn
         drawUpperFloors(numWindows);  //draw all floors above the ground floor (if 5 floors total, draw 4 above ground)
      }
      drawGroundFloor(numWindows);     //after the top floors, insert a ground floor to satisfy all requirements
   } else if (numFloors == 1){         //if the number of floors is equal to 1 then:
      drawGroundFloor(numWindows);     //draw only the ground floor and exit
   }
   
   printf("Drawn above is your building with %d floors and %d windows per floor.\n", numFloors, numWindows); //Confirming with user
   printf("Press any key to exit..."); //prompting user to exit
   getch(); //waiting for user input before an exit
   
   system("cls"); 
   
   return (0);
}  //End main function

//begin getValidData function
int getValidData(int low, int high, char type){ //Validating user inputs
   
   int userInput;  //variable to hold the current input from the user
   
   if(type == 'w'){  //checking for number of windows
   
      puts("Enter the number of windows: "); /////////////////////////////////////
      scanf("%d", &userInput);               //////Getting number of windows//////
      fflush(stdin);                         /////////////////////////////////////
      
      while(userInput < low || userInput > high){ //while the user's inputs are less than min and greater than max:
         printf("Invalid value for number of windows (%d). Enter again: ", userInput); //force user to re-enter becauase invalid value
         scanf("%d", &userInput); 
         fflush(stdin); 
      }
   } else if (type == 'f'){   //checking for number of floors
   
      puts("Enter the number of floors: ");  ////////////////////////////////////
      scanf("%d", &userInput);               //////Getting number of floors//////
      fflush(stdin);                         ////////////////////////////////////
      
      while(userInput < low || userInput > high){ //while the user's inputs are less than min and greater than max:
         printf("Invalid value for number of floors (%d). Enter again: ", userInput);  //force user to re-enter becauase invalid value
         scanf("%d", &userInput); 
         fflush(stdin); 
      }
   }
   return(userInput);
}  //end getValidData function

//begin drawUpperFloors function
void drawUpperFloors(int numOfWindows){ //Drawing all but ground floors with specified number of windows 

   //First line
   printf("+--"); //top left corner of the upper floors
   for(int windowCount = 1; windowCount <= numOfWindows; windowCount++){ //draw one middle section for each window 
      printf("----"); //middle sections of upper floor ceiling (4 dashes per window)
   }
   printf("-+\n"); //top right corner of the upper floors
   
   //Second Line
   printf("|  "); //left wall of the second row from the top of the upper floors
   for(int windowCount = 1; windowCount <= numOfWindows; windowCount++){ //draw one middle section for each window
      printf("    "); //middle sections of the second row of the upper floors (4 spaces per window)
   }
   printf(" |\n"); //right wall of the second row from the top of the upper floors
   
   //Third Line
   printf("| "); //left wall of the third row from the top of the upper floors
   for(int windowCount = 1; windowCount <= numOfWindows; windowCount++){ //draw one middle section for each window
      printf(" ==="); //middle sections of the third row of the upper floors (1 space and 3 '=' per window)
   }
   printf("  |\n"); //right wall of the third row from the top of the upper floors
   
   //Fourth Line
   printf("| "); //left wall of the fourth row from the top of the upper floors
   for(int windowCount = 1; windowCount <= numOfWindows; windowCount++){ //draw one middle section for each window
      printf(" | |"); //middle sections of the fourth row of the upper floors (2 spaces and 2 '|' per window, alternating)
   } 
   printf("  |\n"); //right wall of the fourth row from the top of the upper floors
   
   //Fifth Line
   printf("| "); //left wall of the fifth row from the top of the upper floors
   for(int windowCount = 1; windowCount <= numOfWindows; windowCount++){ //draw one middle section for each window
      printf(" ==="); //middle sections of the fifth row of the upper floors (1 space and 3 '=' per window)
   }
   printf("  |\n"); //right wall of the fifth row from the top of the upper floors
   
   //Sixth Line
   printf("|  "); //left wall of the sixth row from the top of the upper floors
   for(int windowCount = 1; windowCount <= numOfWindows; windowCount++){ //draw one middle section for each window
      printf("    "); //middle sections of the sixth row of the upper floors (4 spaces per window)
   }
   printf(" |\n"); //right wall of the fifth row from the top of the upper floors
   
}  //end drawUpperFloors function

//begin drawGroundFloor function
void drawGroundFloor(int numOfWindows){ //Drawing only the ground floor with specified numbers of windows and doors
   
   //First Line
   printf("+--"); //top left corner of the ground floor
   for(int windowCount = 1; windowCount <= numOfWindows; windowCount++){ //draw one middle section for each window
      printf("----"); //middle sections of ground floor ceiling (4 dashes per window)
   }
   printf("-+\n"); //top right corner of the ground floor
   
   //Second Line
   printf("|  "); //left wall of the second row from the top of the ground floor
   for(int windowCount = 1; windowCount <= numOfWindows; windowCount++){ //draw one middle section for each window
      printf("    "); //middle sections of the second row of the ground floor (4 spaces per window)
   }
   printf(" |\n"); //right wall of the second row from the top of the ground floor
   
   //Third Line
   printf("|  ==="); //left wall of the third row from the top of the ground floor AND top of the door (===)
   if(numOfWindows > 1){ //if there is more than 1 window, 
      for(int windowCount = 2; windowCount <= numOfWindows; windowCount++){ //draw one middle section for each window
         printf(" ==="); //middle sections of the third row of the ground floor (1 space and 3 '=' per window)
      }
   }
   printf("  |\n"); //right wall of the third row from the top of the ground floor
   
   //Fourth Line
   printf("|  | |"); //left wall of the fourth row from the top of the ground floor AND second row of the door (| |)
   if(numOfWindows > 1){ //if there is more than 1 window,
      for(int windowCount = 2; windowCount <= numOfWindows; windowCount++){ //draw one middle section for each window
         printf(" | |"); //middle sections of the fourth row of the ground floor (2 spaces and 2 '|' per window, alternating)
      }
   }
   printf("  |\n"); //right wall of the fourth row from the top of the ground floor
   
   //Fifth Line
   printf("|  | |"); //left wall of the fifth row from the top of the ground floor AND third row of the door (| |)
   if(numOfWindows > 1){ //if there is more than 1 window,
      for(int windowCount = 2; windowCount <= numOfWindows; windowCount++){ //draw one middle section for each window
         printf(" ==="); //middle sections of the fifth row of the ground floor (1 space and 3 '=' per window)
      }
   }
   printf("  |\n"); //right wall of the fifth row from the top of the ground floor
   
   //Sixth Line
   printf("|  | |"); //left wall of the sixth row from the top of the ground floor AND fourth row of the door (| |)
   if(numOfWindows > 1){ //if there is more than 1 window,
      for(int windowCount = 2; windowCount <= numOfWindows; windowCount++){ //draw one middle section for each window
         printf("    "); //middle sections of the sixth row of the ground floor (4 spaces per window)
      }
   }
   printf("  |\n"); //right wall of the sixth row from the top of the ground floor
   
   //Seventh Line
   printf("***"); //Left corner of the floor of the ground floor
   for(int windowCount = 1; windowCount <= numOfWindows; windowCount++){ //draw one middle section for each window
      printf("****"); //middle sections of the ground row of the ground floor (4 '*' per window)
   }
   printf("**\n"); //right corner of the floor of the ground floor
   
}//end drawGroundFloor function

//End Final Project
