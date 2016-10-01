/*
BiCheng Sha
PRG155-NGH
September 8, 2016

Lab 1 Part 2 covers formatting placeholders for outputting numbers and spaces
*/

#include<stdio.h>
int main (void) {
	
	//Question 1a
	printf("Hello World");
	double value = 3.45;
	printf("%lf", value);
	
	
	/*CLEAR LINE*/ printf("\n\n\n");
	
	
	//Question 1b
	printf("We are to learn correct"); //Case sensitive PRINT function
	printf("\nC language here");
	
	
	/*CLEAR LINE*/ printf("\n\n\n");
	
	
	//Question 2a
	puts("\t*");
	puts("\t**");
	puts("\t***");
	puts("\t****");
	
	
	/*CLEAR LINE*/ printf("\n\n\n");
	
	
	//Question 2b
	puts("   *");
	puts(" *   *");
	puts("*  *  *");
	
	
	/*CLEAR LINE*/ printf("\n\n\n");
	
	
	//Question 3
	
	//BEGIN PSEUDO CODE
	
	//#include <stdio.h>
	//main(){
	int a, b = 10;
	
	double f = 10, c ,d;
	
	d = a + b; //d is assigned double when it only needs to be int
	
	c = a / (f - b); //Runtime error where 10/10
	
	printf("The value of d is %d and value of c is %lf\n", d, c); 
	
	//getch();
	//}
	
	//END PSUEDO CODE
	
	
	/*CLEAR LINE*/ printf("\n\n\n");
		
	
	//Question 4a: What is displayed by printf(
	printf("%d", 3/4); //0. because decimal is 0.75 but cuts everything after decimal
	
	/*CLEAR LINE*/ printf("\n\n\n");
	
	//Question 4b: Is printf("%f", 50); valid?
	printf("%f", 50); //not valid
	
	/*CLEAR LINE*/ printf("\n\n\n");
	
	
	//Question 4c: If you omit the (;) at the end of a C statement, is it still working?
	//No.
	
	//Question 4d: What is the difference between %f and %lf?
	//f is for float, lf is for long float, they can be used interchangeably
	
	//Question 4e: What happens when you attempt a division by zero in C?
	//Runtime error - infinite value
	
	//Question 4f: Is there a difference between starting your program with main() instead of int main (void)?
	//No distinguishable difference.
	
	//Question 4g: What happens if you try to display an integer between 0 and 255 with a %c placeholder?
	printf("%c", 128); //the character with that ASCII value is displayed

	
	/*CLEAR LINE*/ printf("\n\n\n");
	

	//Question 6
	printf("%f", 12.1); //12.100000 is seen 
	
	
	/*CLEAR LINE*/ printf("\n\n\n");
	
	//Question 7
	printf("1234567890\n");
	printf("%7.1f", 12.1 + 3.57); 
	
	/*Output becomes 
	1234567890
       15.7
    due to formatting*/
	
	/*CLEAR LINE*/ printf("\n\n\n");
	

	printf("1234567890123\n"); 			 //Output 1234567890123
	printf("%6i%6i\n", 2*3, 4*5);   	 //		       6    20	
	printf("%-6i%6i", 6*6, 20*40); 		 //       36       800
	
	//The minus sign closes the output tab gap when doing %6i
	
	
	/*CLEAR LINE*/ printf("\n\n\n");
	
	getch();
	return 0;
	
}
