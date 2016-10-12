/*
Dealing with SWITCH CASE statements.

Name: BiCheng Sha
Date: October 12, 2016
Class: PRG155-NGH
*/


#include<stdio.h>
#include<math.h>

int main() {
	
	//Question 1: Calculate a) Parallel resistance, b) Current through a resistor, c) Exit program
	
	int choice;
	float resist1a, resist1b, totalPResist, volt, current;
	char resistUnit1a, resistUnit1b, resistUnit2;
	
	printf("\t\t\tMenu\n");
	puts("1. Calculate Parallel Resistance.");
	puts("2. Calculate current flowing through a resistor.");
	puts("3. Exit.");
	
	
	if(choice == 1){
		puts("You have selected option 1 - Calculating parallel resistance.");
	} else if(choice == 2){
		puts("You have selected option 2 - Calculating current flowing through a resistor.");
	} else if(choice == 3){
		puts("You have selected option 3 - Exit.");
		puts("Goodbye.");
		puts("Press any key to exit.");
	} else {
		puts("Invalid entry. Press any key to exit.");
		puts("Goodbye");
	}
	
	
	
	
	
}






