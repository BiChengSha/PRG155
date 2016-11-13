/*
Name: BiCheng Sha
Date: November 9, 2016
Class: PRG155-NGH
Description: Blueprint for the final project. Mostly pseudocode will be included and should NOT be compiled and run. It WILL NOT work at all. (lol)
*/

/*
[Student delclaration to be filled in later on]
*/

#include<stdio.h>

//Function Declarations
int getValidData(int low, int high, char type); //Validating user inputs
void drawUpperFloors(int numOfWindows); //Drawing all but ground floors with specified number of windows
void drawGroundFloor(int numOfWindows); //Drawing only the ground floor with specified numbers of windows and doors

int main(){ //Main function to call up other functions and main logic
   
   //Variable Declarations
   int numFloors, numWindows;
   
   numFloors = getValidData(floorMin, floorMax, 'f');
   numWindows = getValidData(WindowMin, WindowMax, 'w');
   
   drawUpperFloors(numWindows);
   drawGroundFloor(numWindows);
   
   return (0);
   
}

int getValidData(int low, int high, char type){ //Validating user inputs
   
   int userInput;
   
   
   if(type == 'w'){  //checking for number of windows
   
      puts("Enter the number of windows: "); /////////////////////////////////////
      scanf("%d", &userInput);               //////Getting number of windows//////
      fflush(stdin);                         /////////////////////////////////////
      
      while(userInput >= low, userInput <= high){
         puts("Invalid value for number of windows. Enter again: ");    //forcing user to re-enter if invalid
         scanf("%d", &userInput); 
         fflush(stdin); 
      }
   } else if (type == 'f'){   //checking for number of floors
   
      puts("Enter the number of floors: ");  ////////////////////////////////////
      scanf("%d", &userInput);               //////Getting number of floors//////
      fflush(stdin);                         ////////////////////////////////////
      
      while(userInput >= low, userInput <= high){
         puts("Invalid value for number of floors. Enter again: ");     //forcing user to re-enter if invalid
         scanf("%d", &userInput); 
         fflush(stdin); 
      }
   }
   return(userInput);
}

void drawUpperFloors(int numOfWindows){ //Drawing all but ground floors with specified number of windows

}

void drawGroundFloor(int numOfWindows){ //Drawing only the ground floor with specified numbers of windows and doors

}


