/*
BiCheng Sha
PRG155-NGH
September 30, 2016


*/



#include<stdio.h>
#include<math.h>

int main(){


   /*Question 1: Write a program to convert degrees to Fahrenheit. User input in Celcius.*/
   
   const float FIRST_MOD = 1.8; //constant and variable declaration
   const int ADD_TO = 32;
   float celciusIn, fOut;
   
   printf("Enter the temperature in degrees CELCIUS: \n\n"); //promt user
   scanf("%f", &celciusIn); //get input from user
   getchar(); //clear input queue
   
   fOut = (FIRST_MOD*celciusIn)+ADD_TO;  //calculation step
   
   printf("\nThe value entered in Fahrenheit is %.2f degrees.", fOut);  //output final result to user
       
   ///////////////////////////////
   printf("\n\n\n"); //Clear lines
   
   
   
   
   
   
   /*Question 2: Write a program that develops this formula (1/2)*sqrt((pi/a)*e^((b^2-4ac)/4a)))
      Value of "a", "b", and "c" will be inputs from user, output will show in scientific notation
      with 2 decimal places*/      
  
   const float HALF = 0.5, PI = 3.14159265, E_NUM = 2.71828;  //constant decalarations
   float inA, inB, inC;                                       //input variable declarations
   float finalRes;                                            //calculation variable declarations
   
   printf("Enter value for a: \n"); //prompt user for var inA
   scanf("%f", &inA);               //get value for var inA
   getchar();                       //clear input queue
   printf("Enter value for b: \n"); //prompt user for var inB
   scanf("%f", &inB);               //get value for var inB
   getchar();                       //clear input queue
   printf("Enter value for c: \n"); //prompt user for var inC
   scanf("%f", &inC);               //get value for var inC
   getchar();                       //clear input queue
   
   finalRes = HALF*(sqrt(PI/inA))*(pow(E_NUM, (((pow(inB, 2) - (4 * inA * inC))/(4*inA)))));   //calculation step
   printf("The function generated %3.5e from your inputs.", finalRes);                         //output the result
      
   ///////////////////////////////
   printf("\n\n\n"); //Clear lines
   
   
   
   
   
       
   /*Question 3: Write a program to output the CAPITAL letter two characters after that CAPITAL letter.*/

   char charIn, charOut; //variable declaration
   
   printf("Enter a CAPITAL letter: \n");  //prompt user for a capital letter
   scanf("%c", &charIn);                  //get value for charIn
   getchar();                             //clear input queue
   
   if ((charIn > 64 && charIn < 89)) {                                           //check if letters 'A' - 'X'
      charOut = charIn + 2;                                                      //if so, add 2
      printf("\nThe character two letters after %c is %c.", charIn, charOut);    //print result
   } else if (charIn == 89 || charIn == 90) {                                    //check if letters 'Y' or 'Z'
      charOut = charIn - 24;                                                     //if so, loop around to 'A' and 'B'
      printf("\nThe character two letters after %c is %c.", charIn, charOut);    //print result
   } else if ((charIn > 96 && charIn < 121)) {                                   //check if letters 'a' - 'x'
      charIn = charIn - 32;                                                      //if so, bump them to capitals
      charOut = charIn + 2;                                                      //add 2 since they're now capitals
      printf("\nThe character two letters after %c is %c.", charIn, charOut);    //print result
   } else if (charIn == 121 || charIn == 122){                                   //check if letters 'y' or 'z'
      charIn = charIn - 32;                                                      //if so, bump them to capitals
      charOut = charIn - 24;                                                     //loop around back to 'A' and 'B' 
      printf("\nThe character two letters after %c is %c.", charIn, charOut);    //print result
   } else {                                                                      //if none of the above are true
      puts("Invalid character.");                                                //let user know a non-alpha character was entered
   }   
 	///////////////////////////////
   printf("\n\n\n"); //Clear lines
   
   
   
   
   
   /*Question 4: Write a program to output the LOWER CASE letter two characters after that 
   LOWER CASE letter.*/
   
   char charIn2, charOut2;

   printf("Enter a LOWER CASE letter: \n");  //prompt user for a lowercase letter
   scanf("%c", &charIn2);                    //get value for charIn2
   getchar();                                //clear input queue
   
   if ((charIn2 > 96 && charIn2 < 120)) {                                        //check if letters 'a' - 'x'
      charOut2 = charIn2 + 2;                                                    //if so, add 2
      printf("\nThe character two letters after %c is %c.", charIn2, charOut2);  //print result
   } else if (charIn2 == 121 || charIn2 == 122) {                                //check if letters 'y' or 'z'
      charOut2 = charIn2 - 24;                                                   //if so, loop around to 'A' and 'B'
      printf("\nThe character two letters after %c is %c.", charIn2, charOut2);  //print result
   } else if ((charIn2 > 64 && charIn2 < 89)) {                                  //check if letters 'A' - 'X'
      charIn2 = charIn2 + 32;                                                    //if so, drop them to lowercase
      charOut2 = charIn2 + 2;                                                    //add 2 since they're now lowercase
      printf("\nThe character two letters after %c is %c.", charIn2, charOut2);  //print result
   } else if (charIn2 == 89 || charIn2 == 90){                                   //check if letters 'Y' or 'Z'
      charIn2 = charIn2 + 32;                                                    //if so, bump them to lowercase
      charOut2 = charIn2 - 24;                                                   //loop around back to 'a' and 'b'
      printf("\nThe character two letters after %c is %c.", charIn2, charOut2);  //print result
   } else {                                                                      //if none of the above are true
      puts("Invalid character.");                                                //let user know a non-alpha character was entered
   }   

  
   ///////////////////////////////
   printf("\n\n\n"); //Clear lines
   




   /*Question 5: Calculate HST (13%) for user's purchase and output total after tax. */
   
    const float HST = 0.13;         //declare HST constant
    float lastPurch, tax, total;    //declare other variables
      
    printf("Enter the price of your last purchase: ");   //prompt user for value
    scanf("%f", &lastPurch);                             //get user value
    getchar();                                           //clear input queue
    
    system("cls");
    
    tax = HST * lastPurch;                               //calculate tax
    total = lastPurch + tax;                             //calculate totals with taxes
    puts("Thank you for patronizing our store.\n");      //outputs thank you message
    puts("********************************\n\n\n");      //output separators
    printf("Cost of meal:\t\t\t$%5.2f\n\n", lastPurch);  //outputs original meal cost
    printf("HST (13%%): \t\t\t$%5.2f\n\n", tax);       //outputs HST cost
    printf("Total Cost: \t\t\t$%4.2f\n\n\n", total);     //outputs total cost including taxes
    puts("Please visit us again soon.\n");               //outputs goodbye greeting
    puts("*******************************");             //outputs separators
    
    getch();
    return(0);
}
