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
   return(userInput);
}

void drawUpperFloors(int numOfWindows){ //Drawing all but ground floors with specified number of windows

}

void drawGroundFloor(int numOfWindows){ //Drawing only the ground floor with specified numbers of windows and doors

}


