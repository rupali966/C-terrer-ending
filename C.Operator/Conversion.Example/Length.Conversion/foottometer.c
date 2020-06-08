#include<stdio.h> // hare call the standed I/O library for Standerd I/O operation
int main() // hare is declare the main functiomn which return the int value
{
	float meter, foot;
	// hare is declare the variables
	printf("Enter foot value to convert in meter : ");
	// hare is say to user to getting the input from Convertion
	scanf("%f", &foot);
	// hare is get the input for user
	meter = foot/3.2808;
	// hare is declare the convertion formula
	printf("Your covertion is meter = %f m \n", meter);
	// hare is the output which want to user
	return 0;
	// hare is return value which goe to main function
}
// hare is the finish the program and main function
