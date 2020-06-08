#include<stdio.h> // hare call the standerd input output library for input and output
int main() // hare is the main funnction is declare which return the int value 
{
	float celsius, kelvin;
	// hare is declare the variable
	printf("Enter kelvin to Covert in celsius : ");
	// Hare say to the user to kelvin to Covert in celsius
	scanf("%f",&kelvin);
	//Har get the user input
	celsius = kelvin - 273.15;
	// hare declare the formula
	printf("Your Covertion is celsius = %f celsius \n", celsius);
	// here is result which user wants
	return 0;
	// hare is main function return value
}
// hare is the finish the main function and Program
