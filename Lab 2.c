#include<stdio.h>
#include<math.h>

int main() {
	
	
	//Question 3
	int nine = 9, intTwo = 2, intResult;
	float floatTwo = 2.0, floatResult;
	
	floatResult = nine/floatTwo;	
	printf("9/2 = %.1f", floatResult);
	
	printf("\n"); //Clear line
	
	intResult = nine%intTwo;
	printf("9%%2 = %d", intResult);
	
	
	///////////////////////////////
	printf("\n\n\n"); //Clear lines
	
	
	//Question 4
	
	int intBase = 2, intPow1 = 3, intPow2 = 2;
	float floatBase = 1.3;
	
	intResult = pow(intBase, intPow1);
	floatResult = pow(floatBase, intPow2);
	
	printf("2 ^ 3 = %d", intResult);
	printf("\n"); //Clear line
	printf("2 ^ 3 = %.2lf", pow(intBase, intPow1));
	printf("\n"); //Clear line
	printf("1.3 ^ 2 = %.2lf", floatResult);
	
	
	///////////////////////////////
	printf("\n\n\n"); //Clear lines
	
	
	//Question 5
	
	int firstRoot = 9, secondRoot = 15;
	float rootAns1, rootAns2;
	
	rootAns1 = sqrt(firstRoot);
	rootAns2 = sqrt(secondRoot);
	
	printf("The square root of %d is %.2lf", firstRoot, rootAns1);
	printf("\n"); //Clear line
	printf("The square root of %d is %.5lf", secondRoot, rootAns2);
	
	
	///////////////////////////////
	printf("\n\n\n"); //Clear lines
	
	
	//Question 6
	
	float rad = 1.1, pi = 3.1415926535, area1;
	
	area1 = pi*(pow(rad, 2));
	
	printf("The area of a circle with a radius of %.1lf is %.5lf ", rad, area1);
	
	
	///////////////////////////////
	printf("\n\n\n"); //Clear lines
	
	
	//Question 7
	
	float radSphere = 2.2, volSphere;
	
	volSphere = (4/3)*pi*pow(radSphere, 3);
	
	printf("The volume of a sphere with a radius of %.1lf is %.5lf ", radSphere, volSphere);
	
	
	///////////////////////////////
	printf("\n\n\n"); //Clear lines
	
	
	//Question 8
	
	
	double massEarth = 5.9742E+24, massMoon = 7.36E+22, gravForce;
	
	double GRAVITY_CONSTANT = 6.67E-11;
	double DISTANCE = 385000;
	
	gravForce =(GRAVITY_CONSTANT*massEarth*massMoon)/(pow(DISTANCE, 2));
	
	printf("The gravitational force between the Earth and the Moon is %.2E ", gravForce);
	

	//getch();
	return 0;
	
}
