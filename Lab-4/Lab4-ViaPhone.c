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







}
