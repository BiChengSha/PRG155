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
	//Initial goal is to write this using standard IF statements and have question 2 redo it in SWITCH/CASE
	
	int choice;
	float resist1a, resist1b, totalPResist, resist2a, volt, current;
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
		printf("\n\nEnter value of first resistor (include units later): ");
		scanf("%f", &resist1a);
      getchar();
		printf("\nEnter unit of measurement for the first resistor (n, u, m, O, K, M, G): ");
		scanf("%c", &resistUnit1a);
      getchar();
		printf("\n\nEnter value of second resistor (include units later): ");
		scanf("%f", &resist1b);
      getchar();
		printf("\nEnter unit of measurement for the second resistor (n, u, m, O, K, M, G): ");
		scanf("%c", &resistUnit1b);
      getchar(); 
		
      if(resistUnit1a == 'n'){
			resist1a = resist1a * pow(10, -9);
         printf("Resist1a = %.2f\n", resist1a);
		} else if (resistUnit1a == 'u'){
			resist1a = resist1a * pow(10, -6);
         printf("Resist1a = %.2f\n", resist1a);
		} else if (resistUnit1a == 'm'){
			resist1a = resist1a * pow(10, -3);
         printf("Resist1a = %.2f\n", resist1a);
		} else if (resistUnit1a == 'O'){
			resist1a = resist1a * pow(10, 0);
         printf("Resist1a = %.2f\n", resist1a);
		} else if (resistUnit1a == 'K'){
			resist1a = resist1a * pow(10, 3);
         printf("Resist1a = %.2f\n", resist1a);
		} else if (resistUnit1a == 'M'){
			resist1a = resist1a * pow(10, 6);
         printf("Resist1a = %.2f\n", resist1a);
		} else if (resistUnit1a == 'G'){
			resist1a = resist1a * pow(10, 9);
         printf("Resist1a = %.2f\n", resist1a);
		}
		
		if(resistUnit1b == 'n'){
			resist1b = resist1b * pow(10, -9);
         printf("Resist1b = %.2f\n", resist1b);
		} else if (resistUnit1b == 'u'){
			resist1b = resist1b * pow(10, -6);
         printf("Resist1b = %.2f\n", resist1b);
		} else if (resistUnit1b == 'm'){
			resist1b = resist1b * pow(10, -3);
         printf("Resist1b = %.2f\n", resist1b);
		} else if (resistUnit1b == 'O'){
			resist1b = resist1b * pow(10, 0);
         printf("Resist1b = %.2f\n", resist1b);
		} else if (resistUnit1b == 'K'){
			resist1b = resist1b * pow(10, 3);
         printf("Resist1b = %.2f\n", resist1b);
		} else if (resistUnit1b == 'M'){
			resist1b = resist1b * pow(10, 6);
         printf("Resist1b = %.2f\n", resist1b);
		} else if (resistUnit1b == 'G'){
			resist1b = resist1b * pow(10, 9);
         printf("Resist1b = %.2f\n", resist1b);
		}
		
		totalPResist = 1/((1/resist1a)+(1/resist1b));
      
		if (totalPResist < 0.000001){
         totalPResist = totalPResist * pow(10, (9));
		   printf("The total parellel resistance is %.2f nanoOhms", totalPResist);
      } else if (totalPResist >= 0.000001 && totalPResist < 0.001){
         totalPResist = totalPResist * pow(10, (6));
         printf("The total parellel resistance is %.2f microOhms", totalPResist);
      } else if (totalPResist >= 0.001 && totalPResist < 0){
         totalPResist = totalPResist * pow(10, (3));
         printf("The total parellel resistance is %.2f milliOhms", totalPResist);
      } else if (totalPResist >= 0 && totalPResist < 1000){
         totalPResist = totalPResist * pow(10, (0));
         printf("The total parellel resistance is %.2f Ohms", totalPResist);
      } else if (totalPResist >= 1000 && totalPResist < 1000000){
         totalPResist = totalPResist * pow(10, (-3));
         printf("The total parellel resistance is %.2f kiloOhms", totalPResist);
      } else if (totalPResist >= 1000000 && totalPResist < 1000000000){
         totalPResist = totalPResist * pow(10, (-6));
         printf("The total parellel resistance is %.2f megaOhms", totalPResist);
      } else if (totalPResist >= 1000000000){
         totalPResist = totalPResist * pow(10, (-9));
         printf("The total parellel resistance is %.2f gigaOhms", totalPResist);
      }

      
	} else if(choice == 2){
		puts("You have selected option 2 - Calculating current flowing through a resistor.");
		printf("\n\nEnter the numerical value of the resistor (include units later): ");
		scanf("%f", &resist2a);
		printf("\nEnter unit of measurement for the resistor (n, u, m, O, K, M, G): ");
		scanf("%c", &resistUnit2);
      getchar();
		printf("\n\nEnter the numerical voltage value across the resistor IN VOLTS: ");
		scanf("%f", &volt);
		
		if(resistUnit2 == 'n'){
			resist2a = resist2a * pow(10, -9);
		} else if (resistUnit2 == 'u'){
			resist2a = resist2a * pow(10, -6);
		} else if (resistUnit2 == 'm'){
			resist2a = resist2a * pow(10, -3);
		} else if (resistUnit2 == 'O'){
			resist2a = resist2a * pow(10, 0);
		} else if (resistUnit2 == 'K'){
			resist2a = resist2a * pow(10, 3);
		} else if (resistUnit2 == 'M'){
			resist2a = resist2a * pow(10, 6);
		} else if (resistUnit2 == 'G'){
			resist2a = resist2a * pow(10, 9);
		}
		
		current = volt/resist2a;
		
		printf("\n\nThe current flowing through the resistor is %.6f amps.", current);
		
	} else if(choice == 3){
		puts("You have selected option 3 - Exit.");
		puts("Goodbye.");
		puts("Press any key to exit.");
		getch();
	} else {
		puts("Invalid entry. Press any key to exit.");
		getch();
		puts("Goodbye");
	}
	
	
	
	
	
}






