#include<stdio.h>
#include<math.h>

int main(){


   /*Question 1: Write a program to convert degrees to Fahrenheit. User input in Celcius.*/
   
   const float FIRST_MOD = 9/5; //constant and variable declaration
   const int ADD_TO = 32;
   float celciusIn, fOut;
   
   printf("Enter the temperature in degrees CELCIUS: \n\n"); //promt user
   scanf("%f", celciusIn); //get input from user
   
   fOut = (FIRST_MOD*celciusIn)+ADD_TO;  //calculation step
   
   printf("\nThe value entered in Fahrenheit is %f degrees.", fOut);  //output final result to user
   
    
   ///////////////////////////////
   printf("\n\n\n"); //Clear lines
   
   
   /*Question 2: Write a program that develops this formula (1/2)*sqrt((pi/a)*e^((b^2-4ac)/4a)))
      Value of "a", "b", and "c" will be inputs from user, output will show in scientific notation
      with 2 decimal places*/
      
  
   const float HALF = 1/2, PI = 3.14159265, E_NUM = 2.71828;  //constant decalarations
   float inA, inB, inC;                                       //input variable declarations
   float exponent, expTop, expBot, expRes, sqrtRes, finalRes; //calculation variable declarations
   
   printf("Enter value for a: \n"); //get value for var a
   scanf("%f", inA);
   printf("Enter value for b: \n"); //get value for var b
   scanf("%f", inB);
   printf("Enter value for c: \n"); //get value for var c
   scanf("%f", inC);
   
   expTop = pow(inB, 2)-(4*inA*inC);
   expBot = 4*inA;
   exponent = expTop/expBot;
   expRes = pow(E_NUM, exponent);
   sqrtRes = PI/inA;
   finalRes = HALF*sqrtRes*expRes;
   
   printf("The function generated %e from your inputs.", finalRes); 
   
   
   ///////////////////////////////
   printf("\n\n\n"); //Clear lines
       
   /*Question 3: Write a program to output the CAPITAL letter two characters after that CAPITAL letter.
   */

   char charIn, charOut;
   
   printf("Enter a CAPITAL letter: \n"); 
   scanf("%c", charIn);
   
   if 97 <= charIn <= 122 {
      charIn = charIn - 32;
   }
   
   charOut = charIn + 2;
   printf("\nThe character two letters after %c is %c.", charIn, charOut); 
   
   
   








return(0);
}
