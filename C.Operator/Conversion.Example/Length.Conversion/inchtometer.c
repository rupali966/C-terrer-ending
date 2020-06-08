#include<stdio.h> // hare is called the Standerd I/O library for I/O operation
int main() // hare is declare the mainn finction which return int value
{
	float inch, meter;
	// hare is declare the variables 
	printf("Enter Inch to convering in meter: ");
	// hare say to user Enter Inches to converting in meter
	scanf("%f", &inch);
	// hare is the get input from user
	meter = inch/39.370;
	// hare is convering formual is declare
	printf("Your Coverting is meter = %f m \n", meter);
	// hare is declare the result which user want
	return 0;
	// hare is the return value which goes to the main function
}
// hare is the finish the main function and program
