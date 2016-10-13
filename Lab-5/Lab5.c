/*
Dealing with SWITCH CASE statements.

Name: BiCheng Sha
Date: October 12, 2016
Class: PRG155-NGH
*/


#include<stdio.h>
#include<math.h>

int main() {
	
	/*////////////////////////////////////////////////////////////////////////////////////////////////////////
   QUESTION 1: Calculate a) Parallel resistance, b) Current through a resistor, c) Exit program
	Initial goal is to write this using standard IF statements and have question 2 redo it in SWITCH/CASE
   */////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	int choice;
	float resist1a, resist1b, totalPResist, resist2a, volt, current;
	char resistUnit1a, resistUnit1b, resistUnit2;
	
	
	puts("Choose one of the 3 options below: ");
	printf("\n\n\t\tMenu\n");
	puts("1. Calculate Parallel Resistance.");
	puts("2. Calculate current flowing through a resistor.");
	puts("3. Exit.");
	printf("\n\nChoose either 1, 2, or 3: ");
	scanf("%d", &choice);
   system("cls");
	
	if(choice == 1){   /////////////////////////////////////////////////////////////CHOICE 1///////////////
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
         printf("Resistor 1 = %.2f nanoOhms\n", resist1a);
			resist1a = resist1a * pow(10, -9);
		} else if (resistUnit1a == 'u'){
         printf("Resistor 1 = %.2f microOhms\n", resist1a);
			resist1a = resist1a * pow(10, -6);
		} else if (resistUnit1a == 'm'){
         printf("Resistor 1 = %.2f milliOhms\n", resist1a);
			resist1a = resist1a * pow(10, -3);
		} else if (resistUnit1a == 'O'){
         printf("Resistor 1 = %.2f Ohms\n", resist1a);
			resist1a = resist1a * pow(10, 0);
		} else if (resistUnit1a == 'K'){
         printf("Resistor 1 = %.2f kiloOhms\n", resist1a);
			resist1a = resist1a * pow(10, 3);
		} else if (resistUnit1a == 'M'){
         printf("Resistor 1 = %.2f megaOhms\n", resist1a);
			resist1a = resist1a * pow(10, 6);
		} else if (resistUnit1a == 'G'){
         printf("Resistor 1 = %.2f gigaOhms\n", resist1a);
			resist1a = resist1a * pow(10, 9);
		}
		
		if(resistUnit1b == 'n'){
         printf("Resistor 2 = %.2f nanoOhms\n", resist1b);
			resist1b = resist1b * pow(10, -9);
		} else if (resistUnit1b == 'u'){
         printf("Resistor 2 = %.2f microOhms\n", resist1b);
			resist1b = resist1b * pow(10, -6);
		} else if (resistUnit1b == 'm'){
         printf("Resistor 2 = %.2f milliOhms\n", resist1b);
			resist1b = resist1b * pow(10, -3);
		} else if (resistUnit1b == 'O'){
         printf("Resistor 2 = %.2f Ohms\n", resist1b);
			resist1b = resist1b * pow(10, 0);
		} else if (resistUnit1b == 'K'){
         printf("Resistor 2 = %.2f kiloOhms\n", resist1b);
			resist1b = resist1b * pow(10, 3);
		} else if (resistUnit1b == 'M'){
         printf("Resistor 2 = %.2f megaOhms\n", resist1b);
			resist1b = resist1b * pow(10, 6);
		} else if (resistUnit1b == 'G'){
         printf("Resistor 2 = %.2f gigaOhms\n", resist1b);
			resist1b = resist1b * pow(10, 9);
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

      
	} else if(choice == 2){//////////////////////////////////////////////////////////////////CHOICE 2/////
		puts("You have selected option 2 - Calculating current flowing through a resistor.");
		printf("\n\nEnter the numerical value of the resistor (include units later): ");
		scanf("%f", &resist2a);
      getchar();
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
      
      if (current < 0.000001){
         current = current * pow(10, (9));
		   printf("The total current flowing is %.2f nanoAmps", current);
      } else if (current >= 0.000001 && current < 0.001){
         current = current * pow(10, (6));
         printf("The total current flowing is %.2f microAmps", current);
      } else if (current >= 0.001 && current < 0){
         current = current * pow(10, (3));
         printf("The total current flowing is %.2f milliAmps", current);
      } else if (current >= 0 && current < 1000){
         current = current * pow(10, (0));
         printf("The total current flowing is %.2f Amps", current);
      } else if (current >= 1000 && current < 1000000){
         current = current * pow(10, (-3));
         printf("The total current flowing is %.2f kiloAmps", current);
      } else if (current >= 1000000 && current < 1000000000){
         current = current * pow(10, (-6));
         printf("The total current flowing is %.2f megaAmps", current);
      } else if (current >= 1000000000){
         current = current * pow(10, (-9));
         printf("The total current flowing is %.2f gigaAmps", current);
      }
		
		//printf("\n\nThe current flowing through the resistor is %.6f amps.", current);
		
	} else if(choice == 3){////////////////////////////////////////////////////////////////////CHOICE 3//////
		puts("You have selected option 3 - Exit.");
		puts("Goodbye.");
		puts("Press any key to exit.");
		getch();
	} else {
		puts("Invalid entry. Press any key to exit.");
		getch();
		puts("Goodbye");
	}
   
   getchar();
   printf("\n\n\n"); 
	
   /*/////////////////////////////////////////////////////////////////////////////////////////////////////////
      QUESTION 2: Redo Question 1 using a SWITCH/CASE structure
   *//////////////////////////////////////////////////////////////////////////////////////////////////////////
   
   puts("Choose one of the 3 options below: ");
	printf("\n\n\t\tMenu\n");
	puts("1. Calculate Parallel Resistance.");
	puts("2. Calculate current flowing through a resistor.");
	puts("3. Exit.");
	printf("\n\nChoose either 1, 2, or 3: ");
	scanf("%d", &choice);
   system("cls");
	
	switch (choice){
   case 1: /////////////////////////////////////////////////////////////////////CHOICE 1///////////////
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
		
      switch (resistUnit1a){
         case 'n':
            printf("Resistor 1 = %.2f nanoOhms\n", resist1a);
   			resist1a = resist1a * pow(10, -9);
            break;
		   case 'u':
            printf("Resistor 1 = %.2f microOhms\n", resist1a);
			   resist1a = resist1a * pow(10, -6);
            break;
   		case 'm':
            printf("Resistor 1 = %.2f milliOhms\n", resist1a);
			   resist1a = resist1a * pow(10, -3);
            break;
   		case 'O':
            printf("Resistor 1 = %.2f Ohms\n", resist1a);
			   resist1a = resist1a * pow(10, 0);
            break;
   		case 'K':
            printf("Resistor 1 = %.2f kiloOhms\n", resist1a);
			   resist1a = resist1a * pow(10, 3);
            break;
   		case 'M':
            printf("Resistor 1 = %.2f megaOhms\n", resist1a);
			   resist1a = resist1a * pow(10, 6);
            break;
   		case 'G':
            printf("Resistor 1 = %.2f gigaOhms\n", resist1a);
			   resist1a = resist1a * pow(10, 9);
            break;
		}
      
      switch (resistUnit1b){
         case 'n':
            printf("Resistor 2 = %.2f nanoOhms\n", resist1b);
   			resist1b = resist1b * pow(10, -9);
            break;
		   case 'u':
            printf("Resistor 2 = %.2f microOhms\n", resist1b);
			   resist1b = resist1b * pow(10, -6);
            break;
   		case 'm':
            printf("Resistor 2 = %.2f milliOhms\n", resist1b);
			   resist1b = resist1b * pow(10, -3);
            break;
   		case 'O':
            printf("Resistor 2 = %.2f Ohms\n", resist1b);
			   resist1b = resist1b * pow(10, 0);
            break;
   		case 'K':
            printf("Resistor 2 = %.2f kiloOhms\n", resist1b);
			   resist1b = resist1b * pow(10, 3);
            break;
   		case 'M':
            printf("Resistor 2 = %.2f megaOhms\n", resist1b);
			   resist1b = resist1b * pow(10, 6);
            break;
   		case 'G':
            printf("Resistor 2 = %.2f gigaOhms\n", resist1b);
			   resist1b = resist1b * pow(10, 9);
            break;
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

      
	   break;
      
   case 2: //////////////////////////////////////////////////////////////////CHOICE 2/////
		puts("You have selected option 2 - Calculating current flowing through a resistor.");
		printf("\n\nEnter the numerical value of the resistor (include units later): ");
		scanf("%f", &resist2a);
      getchar();
		printf("\nEnter unit of measurement for the resistor (n, u, m, O, K, M, G): ");
		scanf("%c", &resistUnit2);
      getchar();
		printf("\n\nEnter the numerical voltage value across the resistor IN VOLTS: ");
		scanf("%f", &volt);
		
		switch (resistUnit2){
         case 'n':
   			resist2a = resist2a * pow(10, -9);
            break;
   		case 'u':
   			resist2a = resist2a * pow(10, -6);
            break;
   		case 'm':
   			resist2a = resist2a * pow(10, -3);
            break;
   		case 'O':
   			resist2a = resist2a * pow(10, 0);
            break;
   		case 'K':
   			resist2a = resist2a * pow(10, 3);
            break;
   		case 'M':
   			resist2a = resist2a * pow(10, 6);
            break;
   		case 'G':
   			resist2a = resist2a * pow(10, 9);
            break;
		}
		
		current = volt/resist2a;
      
      if (current < 0.000001){
         current = current * pow(10, (9));
		   printf("The total current flowing is %.2f nanoAmps", current);
      } else if (current >= 0.000001 && current < 0.001){
         current = current * pow(10, (6));
         printf("The total current flowing is %.2f microAmps", current);
      } else if (current >= 0.001 && current < 0){
         current = current * pow(10, (3));
         printf("The total current flowing is %.2f milliAmps", current);
      } else if (current >= 0 && current < 1000){
         current = current * pow(10, (0));
         printf("The total current flowing is %.2f Amps", current);
      } else if (current >= 1000 && current < 1000000){
         current = current * pow(10, (-3));
         printf("The total current flowing is %.2f kiloAmps", current);
      } else if (current >= 1000000 && current < 1000000000){
         current = current * pow(10, (-6));
         printf("The total current flowing is %.2f megaAmps", current);
      } else if (current >= 1000000000){
         current = current * pow(10, (-9));
         printf("The total current flowing is %.2f gigaAmps", current);
      }
      
      break;
		
	case 3: ////////////////////////////////////////////////////////////////////CHOICE 3//////
		puts("You have selected option 3 - Exit.");
		puts("Goodbye.");
		puts("Press any key to exit.");
		getch();
      break;
	default:
		puts("Invalid entry. Press any key to exit.");
		getch();
		puts("Goodbye");
      break;
	}
   
   getchar();
   printf("\n\n\n"); 
      
   /*/////////////////////////////////////////////////////////////////////////////////////////////////////
   QUESTION 3: Redo Question 2 but use 'a', 'b', and 'c' as choices.
   *//////////////////////////////////////////////////////////////////////////////////////////////////////
   
   char choiceChar;
   
   puts("Choose one of the 3 options below: ");
	printf("\n\n\t\tMenu\n");
	puts("a) Calculate Parallel Resistance.");
	puts("b) Calculate current flowing through a resistor.");
	puts("c) Exit.");
	printf("\n\nChoose either a, b, or c: ");
	scanf("%c", &choiceChar);
   system("cls");
	
	switch (choiceChar){
   case 'a': /////////////////////////////////////////////////////////////////////CHOICE 1///////////////
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
		
      switch (resistUnit1a){
         case 'n':
            printf("Resistor 1 = %.2f nanoOhms\n", resist1a);
   			resist1a = resist1a * pow(10, -9);
            break;
		   case 'u':
            printf("Resistor 1 = %.2f microOhms\n", resist1a);
			   resist1a = resist1a * pow(10, -6);
            break;
   		case 'm':
            printf("Resistor 1 = %.2f milliOhms\n", resist1a);
			   resist1a = resist1a * pow(10, -3);
            break;
   		case 'O':
            printf("Resistor 1 = %.2f Ohms\n", resist1a);
			   resist1a = resist1a * pow(10, 0);
            break;
   		case 'K':
            printf("Resistor 1 = %.2f kiloOhms\n", resist1a);
			   resist1a = resist1a * pow(10, 3);
            break;
   		case 'M':
            printf("Resistor 1 = %.2f megaOhms\n", resist1a);
			   resist1a = resist1a * pow(10, 6);
            break;
   		case 'G':
            printf("Resistor 1 = %.2f gigaOhms\n", resist1a);
			   resist1a = resist1a * pow(10, 9);
            break;
		}
      
      switch (resistUnit1b){
         case 'n':
            printf("Resistor 2 = %.2f nanoOhms\n", resist1b);
   			resist1b = resist1b * pow(10, -9);
            break;
		   case 'u':
            printf("Resistor 2 = %.2f microOhms\n", resist1b);
			   resist1b = resist1b * pow(10, -6);
            break;
   		case 'm':
            printf("Resistor 2 = %.2f milliOhms\n", resist1b);
			   resist1b = resist1b * pow(10, -3);
            break;
   		case 'O':
            printf("Resistor 2 = %.2f Ohms\n", resist1b);
			   resist1b = resist1b * pow(10, 0);
            break;
   		case 'K':
            printf("Resistor 2 = %.2f kiloOhms\n", resist1b);
			   resist1b = resist1b * pow(10, 3);
            break;
   		case 'M':
            printf("Resistor 2 = %.2f megaOhms\n", resist1b);
			   resist1b = resist1b * pow(10, 6);
            break;
   		case 'G':
            printf("Resistor 2 = %.2f gigaOhms\n", resist1b);
			   resist1b = resist1b * pow(10, 9);
            break;
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
	   break;
      
   case 'b': //////////////////////////////////////////////////////////////////CHOICE 2/////
		puts("You have selected option 2 - Calculating current flowing through a resistor.");
		printf("\n\nEnter the numerical value of the resistor (include units later): ");
		scanf("%f", &resist2a);
      getchar();
		printf("\nEnter unit of measurement for the resistor (n, u, m, O, K, M, G): ");
		scanf("%c", &resistUnit2);
      getchar();
		printf("\n\nEnter the numerical voltage value across the resistor IN VOLTS: ");
		scanf("%f", &volt);
		
		switch (resistUnit2){
         case 'n':
   			resist2a = resist2a * pow(10, -9);
            break;
   		case 'u':
   			resist2a = resist2a * pow(10, -6);
            break;
   		case 'm':
   			resist2a = resist2a * pow(10, -3);
            break;
   		case 'O':
   			resist2a = resist2a * pow(10, 0);
            break;
   		case 'K':
   			resist2a = resist2a * pow(10, 3);
            break;
   		case 'M':
   			resist2a = resist2a * pow(10, 6);
            break;
   		case 'G':
   			resist2a = resist2a * pow(10, 9);
            break;
		}
		
		current = volt/resist2a;
      
      if (current < 0.000001){
         current = current * pow(10, (9));
		   printf("The total current flowing is %.2f nanoAmps", current);
      } else if (current >= 0.000001 && current < 0.001){
         current = current * pow(10, (6));
         printf("The total current flowing is %.2f microAmps", current);
      } else if (current >= 0.001 && current < 0){
         current = current * pow(10, (3));
         printf("The total current flowing is %.2f milliAmps", current);
      } else if (current >= 0 && current < 1000){
         current = current * pow(10, (0));
         printf("The total current flowing is %.2f Amps", current);
      } else if (current >= 1000 && current < 1000000){
         current = current * pow(10, (-3));
         printf("The total current flowing is %.2f kiloAmps", current);
      } else if (current >= 1000000 && current < 1000000000){
         current = current * pow(10, (-6));
         printf("The total current flowing is %.2f megaAmps", current);
      } else if (current >= 1000000000){
         current = current * pow(10, (-9));
         printf("The total current flowing is %.2f gigaAmps", current);
      }
      break;
		
	case 'c': ////////////////////////////////////////////////////////////////////CHOICE 3//////
		puts("You have selected option 3 - Exit.");
		puts("Goodbye.");
		puts("Press any key to exit.");
		getch();
      break;
	default:
		puts("Invalid entry. Press any key to exit.");
		getch();
		puts("Goodbye");
      break;
	}
   
   getchar();
   printf("\n\n\n"); 

	/*/////////////////////////////////////////////////////////////////////////////////////////////////////////
   QUESTION 4: Develop a program to simulate a troubleshooting of a hypothetical diesel engine.
   *//////////////////////////////////////////////////////////////////////////////////////////////////////////
   
   char lightStat, pressureStat, flowStat;
   int meter3;
   
   puts("Please check your status lights. Are they "); 
   printf("\ta) Green\n\tb) Amber\n\tc) Red\n"); 
   scanf("%c", &lightStat);
   getchar();
   
   switch (lightStat){
      case 'a':
         puts("//////////GREEN LIGHT//////////"); 
         puts("Do a restart procedure."); 
         puts("Press any key to exit."); 
         getch();
         break;
      case 'b':
         puts("//////////AMBER LIGHT//////////");
         puts("Check fuel line service routine."); 
         puts("Press any key to exit."); 
         getch();
         break;
      case 'c':
         puts("//////////RED LIGHT//////////"); 
         puts("Shut off ALL input lines and check METER #3."); 
         printf("Enter METER #3 value: "); 
         scanf("%d", &meter3);
         getchar();
         
         if (meter3 < 50){
               puts("METER #3 is below 50."); 
               puts("Check main line for test pressure. Is it"); 
               printf("\ta) High\n\tb) Normal\n\tc) Low\n");
               scanf("%c", &pressureStat); 
               getchar();
               
               switch (pressureStat){
                  case 'a':
                     puts("Pressure is HIGH."); 
                     puts("Refer to main line manual."); 
                     break;
                  case 'b':
                     puts("Pressure is NORMAL."); 
                     puts("Refer to motor service manual."); 
                     break;
                  case 'c':
                     puts("Pressure is LOW."); 
                     puts("Refer to main line manual."); 
               }
               break;
            } else if (meter3 >= 50){
               puts("METER #3 is 50 or higher."); 
               puts("Measure the flow velocity at inlet 2-B. Is it"); 
               printf("\ta) High\n\tb) Normal\n\tc) Low\n"); 
               scanf("%c", &flowStat);
               
               switch(flowStat){
                  case 'a':
                     puts("Flow velocity is HIGH."); 
                     puts("Refer unit for factory service."); 
                     break;
                  case 'b':
                     puts("Flow velocity is NORMAL."); 
                     puts("Refer to inlet service manual."); 
                     break;
                  case 'c':
                     puts("Flow velocity is LOW."); 
                     puts("Refer unit for factory service."); 
                     break;
               }
               break;
            }
         puts("Press any key to exit."); 
         break;
   }
}
