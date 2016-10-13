/*
Dealing with SWITCH CASE statements.

Name: BiCheng Sha
Date: October 13, 2016
Class: PRG155-NGH
*/


#include<stdio.h>
#include<math.h>

int main() {
   
   char lightStat, pressureStat, flowStat;
   int meter3;
   
   
   puts("Please check your status lights. Are they "); 
   printf("\ta) Green\n\tb) Amber\n\tc) Red\n"); 
   scanf("%c", &lightStat);
   getchar();
   
   switch (lightStat){
      case 'a':
         puts("//////////GREEN LIGHT//////////"); 
         puts("Do a restart procedure."); 
         puts("Press any key to exit."); 
         getch();
         break;
      case 'b':
         puts("//////////AMBER LIGHT//////////");
         puts("Check fuel line service routine."); 
         puts("Press any key to exit."); 
         getch();
         break;
      case 'c':
         puts("//////////RED LIGHT//////////"); 
         puts("Shut off ALL input lines and check METER #3."); 
         printf("Enter METER #3 value: "); 
         scanf("%d", &meter3);
         getchar();
         
         if (meter3 < 50){
               puts("METER #3 is below 50."); 
               puts("Check main line for test pressure. Is it"); 
               printf("\ta) High\n\tb) Normal\n\tc) Low\n");
               scanf("%c", &pressureStat); 
               getchar();
               
               switch (pressureStat){
                  case 'a':
                     puts("Pressure is HIGH."); 
                     puts("Refer to main line manual."); 
                     break;
                  case 'b':
                     puts("Pressure is NORMAL."); 
                     puts("Refer to motor service manual."); 
                     break;
                  case 'c':
                     puts("Pressure is LOW."); 
                     puts("Refer to main line manual."); 
               }
               break;
            } else if (meter3 >= 50){
               puts("METER #3 is 50 or higher."); 
               puts("Measure the flow velocity at inlet 2-B. Is it"); 
               printf("\ta) High\n\tb) Normal\n\tc) Low\n"); 
               scanf("%c", &flowStat);
               
               switch(flowStat){
                  case 'a':
                     puts("Flow velocity is HIGH."); 
                     puts("Refer unit for factory service."); 
                     break;
                  case 'b':
                     puts("Flow velocity is NORMAL."); 
                     puts("Refer to inlet service manual."); 
                     break;
                  case 'c':
                     puts("Flow velocity is LOW."); 
                     puts("Refer unit for factory service."); 
                     break;
               }
               break;
            }
         puts("Press any key to exit."); 
         break;
   }
}
