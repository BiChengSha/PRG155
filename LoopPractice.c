/*
Practicing loops

October 5
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){

   int count = 2;

   printf("Enter number of times to loop: "); 
   scanf("%d", &count);

   for (int i = 1; i <= count; i++){
      printf("%i\n", i);
   }
   
   count = count * 2;
   
   for (int i = 1; i <= count; i+=2){
      for (int k = 0; k < (count/2 - i/2); k++){
         printf(" "); 
      }
      for (int j = 0; j < i; j++){
         printf("*"); 
      }
      printf("\n");
   }
   
   
}


