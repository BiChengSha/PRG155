/*
Name: BiCheng Sha
Class: PRG155-NGH
Date: November 9, 2016
Description: Q1: Using a nested loop to print a table
*/

int main(){
   
   
   for(int first = 0; first <= 2; first++){
      for(int second = 1; second <= 6; second++){
         
         if(first == 0){
            printf(" %d ", second); 
         } else {
            printf("%d%d ", first, second); 
         }
         
      }
      puts(""); 
   }
      
   return(0);
   
}
