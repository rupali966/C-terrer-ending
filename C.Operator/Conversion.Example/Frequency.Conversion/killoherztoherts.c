#include<stdio.h> // hare call the standerd input output library for input and output
int main() // hare is the main funnction is declare which return the int value 
{
	float hertz, kilohertz;
	// hare is declare the variable
	printf("Enter kilohertz to Covert in hertz : ");
	// Hare say to the user to kilohertz to Covert in hertz
	scanf("%f",&kilohertz);
	//Har get the user input
	hertz = kilohertz*1000;
	// hare declare the formula
	printf("Your Covertion is hertz  = %f Hz \n", hertz);
	// here is result which user wants
	return 0;
	// hare is main function return value
}
// hare is the finish the main function and Program
