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
	
	
	puts("Choose one of the 3 options below: ");
	printf("\t\t\tMenu\n");
	puts("1. Calculate Parallel Resistance.");
	puts("2. Calculate current flowing through a resistor.");
	puts("3. Exit.");
	printf("\n\nChoose either 1, 2, or 3: ");
	scanf("%d", &choice);
	
	if(choice == 1){
		puts("You have selected option 1 - Calculating parallel resistance.");
		printf("\n\nEnter value of first resistor: ");
		scanf("%f", &resist1a);
		printf("Enter unit of measurement for the first resistor (n, u, m, O, K, M, G): ");
		scanf("%f", &resistUnit1a);
		printf("\n\nEnter value of second resistor: ");
		scanf("%f", &resist1b);
		printf("Enter unit of measurement for the second resistor (n, u, m, O, K, M, G): ");
		scanf("%f", &resistUnit1b);
		
		if(resistUnit1a == 'n'){
			resist1a = resist1a * pow(10, -9);
		} else if (resistUnit1a == 'u'){
			resist1a = resist1a * pow(10, -6);
		} else if (resistUnit1a == 'm'){
			resist1a = resist1a * pow(10, -3);
		} else if (resistUnit1a == 'O'){
			resist1a = resist1a * pow(10, 0);
		} else if (resistUnit1a == 'K'){
			resist1a = resist1a * pow(10, 3);
		} else if (resistUnit1a == 'M'){
			resist1a = resist1a * pow(10, 6);
		} else if (resistUnit1a == 'G'){
			resist1a = resist1a * pow(10, 9);
		}
		
		if(resistUnit1b == 'n'){
			resist1b = resist1b * pow(10, -9);
		} else if (resistUnit1b == 'u'){
			resist1b = resist1b * pow(10, -6);
		} else if (resistUnit1b == 'm'){
			resist1b = resist1b * pow(10, -3);
		} else if (resistUnit1b == 'O'){
			resist1b = resist1b * pow(10, 0);
		} else if (resistUnit1b == 'K'){
			resist1b = resist1b * pow(10, 3);
		} else if (resistUnit1b == 'M'){
			resist1b = resist1b * pow(10, 6);
		} else if (resistUnit1b == 'G'){
			resist1b = resist1b * pow(10, 9);
		}
		
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






