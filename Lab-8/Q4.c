/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 21, 2016
*/

#include<stdio.h>
#include<math.h>

void greeting();
float sqrtCalc(float toSqrt);

int main(){
   
   float input;
   
   puts("Inside main() function"); 
   greeting();
   puts("Back inside main() function"); 
   puts("Enter a number to square root: ");
   scanf("%f", &input); 
   printf("The square root of the number entered is: %.2f\n", sqrtCalc(input));
   puts("Press any key to continue...");
   getch();
   
}

void greeting(){
   
   puts("Inside greeting() function"); 
   puts("Hello"); 
   
}

float sqrtCalc(float toSqrt){
   
   puts("Inside sqrtCalc() function"); 
   
   float rooted = sqrt(toSqrt);
   
   return rooted;
}