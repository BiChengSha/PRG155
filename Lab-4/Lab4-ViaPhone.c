/*
This file has been created off my phone because I'm too lazy to actually boot my PC to do this lab. 

BiCheng Sha 
October 2, 2016
PRG155-NGH
*/

#include<stdio.h>
#include<math.h>


int main(){
  
  //Question 1: if num > 0 then x3 and output result, if <0 then x(-1) and output abs val and if 0 then output =0
  float numIn, numResult;

  puts("Enter a number: ");
  scanf("%f", &numIn);

  if (numIn > 0){
    numResult = numIn * 3;
    printf("%f.2 multiplied by 3 is %f.2", numIn, numResult);
  } else if (numIn < 0) {
    numResult = numIn * (-1);
    printf("The absolute value of %f.2 is %f.2", numIn, numResult);
  } else if (numIn == 0){
    puts("Your number is 0");
  } else {
    puts("Invalid number.");
  }


  ///////////////////////////////////
  printf("\n\n\n"); //clear lines





  //Question 2:
  int firstNum, secondNum, product;

  puts("Enter an integer: ");
  scanf("%d", &firstNum);
  puts("Enter a second integer: ");
  scanf("%d", secondNum);

  if(firstNum > 100 && secondNum > 100){
    puts("Both numbers are greater than 100");
    product = firstNum * secondNum;
    printf("%d", product);
  } else {
    puts("At least one of the numbers are less than 100."); 
  }

  ///////////////////////////////
  printf("\n\n\n"); //Clear lines
    
  
  
  
  //Question 3: check if input char is A or B. Output yes or no, then Goodbye from same command on seperate output lines.
  char charIn;
  
  puts("Enter a character: "); 
  scanf("%c", &charIn);
  
  if (charIn == 'A' || charIn == 'B'){
    printf("That's an A or a B.\nGoodbye."); 
  } else {
    printf("That's not an A or a B.\nGoodbye.");
  }
  
  ///////////////////////////////
  printf("\n\n\n"); //Clear lines
   
  
  
  
  //Question 4: BMI calculator
  const float POUND_KILO = 0.453;
  const float INCH_METER = 0.0254;
  
  float pound, kilo, inch, meter, bmi;
  
  puts("Enter your weight in POUNDS: "); 
  scanf("%f", &pound);
  puts("Enter your height in INCHES: "); 
  scanf("%f", %inch);
  
  kilo = pound * POUND_KILO;
  meter = inch * INCH_METER;
  
  bmi = kilo / (pow(meter, 2));
  
  if (bmi < 16){
    
  } else if (bmi >= 16 && bmi <= 18){
    
  } else if (bmi > 18 && bmi <= 24){
  
  } else if (bmi > 24 && bmi <= 29){
  
  } else if (bmi > 29 && bmi <= 35){
  
  } else if (bmi > 35){
  
  }
  
  
  
  
  
  
  
  
  
  
  
  


}
