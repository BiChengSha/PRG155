#include<stdio.h>
#include<math.h>
#define PI 3.14159

void showMenu();
float calcCircArea(float rad);
float calcSectArea(float rad2, float angle);
void endProgram();

int main(){
   
   float radius, radians;
   char choice;
   
   puts("Enter the radius of a circle in cm: "); 
   scanf("%f", &radius); 
   fflush(stdin); 
   puts("Enter an angle of a sector in radians: "); 
   scanf("%f", &radians); 
   fflush(stdin); 
   puts("Choose of of the options below..."); 
   
   showMenu();
   
   scanf("%c", &choice);
   
   while (choice != 'C' && choice != 'c' && choice != 'S' && choice != 's' && choice != 'E' && choice != 'e'){
      system("cls"); 
      puts("Invalid entry, please try again."); 
      showMenu();
      scanf("%c", &choice);
      fflush(stdin);
   }
   switch (choice){
      case 'c':
      case 'C':
         system("cls"); 
         printf("The area of the circle with a %.2fcm radius entered is %.2fsq.cm.\n", radius, calcCircArea(radius)); 
         endProgram();
         break;
      case 's':
      case 'S':
         system("cls"); 
         printf("The area of the sector of the circle with a %.2fcm radius and %.2f radian entered is %.2fsq.cm.\n", radius, radians, calcSectArea(radius, radians));
         endProgram();
         break;
      case 'e':
      case 'E':
         endProgram();
         break;
   }
   return(0);
}

void showMenu(){
   printf("\n\tMENU\n"); 
   printf("C.   Circle Area\n"); 
   printf("S.   Sector Area\n"); 
   printf("E.   Exit\n"); 
}

float calcCircArea(float rad){
   float circArea;
   circArea = PI * pow(rad, 2);
   return circArea;
}

float calcSectArea(float rad2, float theta){
   float sectArea, deg;
   deg = (theta * 180)/PI;
   sectArea = (pow(rad2, 2) * theta)/2;
   return sectArea;
}

void endProgram(){
   puts("Press any key to exit...");
   getch();
   system("cls");
}
