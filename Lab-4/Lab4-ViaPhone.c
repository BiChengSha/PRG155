/*
This file has been created off my phone because I'm too lazy to actually boot my PC to do this lab. 

BiCheng Sha 
October 2, 2016
PRG155-NGH?
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



}
