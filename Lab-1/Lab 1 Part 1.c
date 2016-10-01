/*
BiCheng Sha
PRG155-NGH
September 8, 2016


Lab 1 Part 1 goes over basic output commands and modifiers in C.
*/


#include<stdio.h>
int main() {
	
	//Question 1
	printf("Hello1 ");
	printf("Hello2 ");
	
	/*CLEAR LINE*/ printf("\n\n\n");
	
	//Question 2
	printf("Hello2\n");
	printf("^^Hello3");
	
	/*CLEAR LINE*/ printf("\n\n\n");
	
	//Question 3
	printf("123456789");
	printf("\n\tHello4");
	
	/*CLEAR LINE*/ printf("\n\n\n");
	
	//Question 4
	puts("Hello");
	puts("\tHello");
	
	/*CLEAR LINE*/ printf("\n\n\n");
	
	//Question 5
	puts("Hello");
	puts("     Goodbye");
	puts("\tSee you later");
	puts("\t\t   5' - 10\"");
	puts("\t\t\t yes\\no");
	
	getch();
	return 0;
}
