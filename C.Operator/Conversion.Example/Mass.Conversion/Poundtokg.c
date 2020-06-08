#include<stdio.h> // hare call the standerd input output library for input and output
int main() // hare is the main funnction is declare which return the int value 
{
	float Kilogram, Pounds;
	// hare is declare the variable
	printf("Enter Pounds to Covert in Kilogram : ");
	// Hare say to the user to Pounds to Covert in Kilogram
	scanf("%f",&Pounds);
	//Har get the user input
	Kilogram = Pounds/2.205;
	// hare declare the formula
	printf("Your Covertion is Kilogram = %f kg \n", Kilogram);
	// here is result which user wants
	return 0;
	// hare is main function return value
}
// hare is the finish the main function and Program
