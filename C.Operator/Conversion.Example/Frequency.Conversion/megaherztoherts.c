#include<stdio.h> // hare call the standerd input output library for input and output
int main() // hare is the main funnction is declare which return the int value 
{
	float hertz, Megahertz;
	// hare is declare the variable
	printf("Enter Megahertz to Covert in hertz : ");
	// Hare say to the user to Megahertz to Covert in hertz
	scanf("%f",&Megahertz);
	//Har get the user input
	hertz = Megahertz*1000000;
	// hare declare the formula
	printf("Your Covertion is hertz  = %f Hz \n", hertz);
	// here is result which user wants
	return 0;
	// hare is main function return value
}
// hare is the finish the main function and Program
