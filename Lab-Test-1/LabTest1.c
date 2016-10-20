/*
Lab test 1 consists of over question: to retrieve user input of either N or E for calculating the area of an equilateral triangle or to exit. Ensure measures are in place to handle non N or E input as well as properly calculating the address. 
*/




#include<stdio.h>
#include<math.h>

int main (){
   
   char choice;
   float side1, side2, side3, triangleArea;
   
   printf("Enter a selection: \n"); 
   printf("N. \tNumber\n"); 
   printf("E. \tExit\n"); 
   
   scanf("%c", &choice);
   getchar();
   
   system("cls");
   
   switch(choice){
   
      case 'N':
      case 'n':
         printf("\nEnter the length of the first side of the triangle (a): ");
         scanf("%f", &side1);
         printf("\nEnter the length of the second side of the triangle (b): "); 
         scanf("%f", &side2);
         printf("\nEnter the length of the third side of the triangle (c): "); 
         scanf("%f", &side3);
         
         if (side1 == side2 && side2 == side3){
            system("cls");
            puts("This is an equalateral triangle. ");
            triangleArea = (pow(side1, 2) * sqrt(3)) / 4;
            printf("The area of this triangle is %.2f\n", triangleArea); 
            puts("Press any key to continue..."); 
            getch();
         } else {
            system("cls");
            puts("This is not an equalateral triangle."); 
            puts("Press any key to continue...");
            getch(); 
         }
         
         break;
         
      case 'E':
      case 'e':
         system("cls");
         puts("Program ends.");  
         puts("Press any key to continue..."); 
         getch();
         break;
         
      default:
         system("cls");
         puts("Invalid entry.");
         puts("Press any key to continue..."); 
         getch();
   }
   return(0);
}
