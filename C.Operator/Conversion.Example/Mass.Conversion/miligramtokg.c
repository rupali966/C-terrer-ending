#include<stdio.h> // hare call the standerd input output library for input and output
int main() // hare is the main funnction is declare which return the int value 
{
	float Kilogram, Miligram;
	// hare is declare the variable
	printf("Enter Miligram to Covert in Kilogram : ");
	// Hare say to the user to Miligram to Covert in Kilogram
	scanf("%f",&Miligram);
	//Har get the user input
	Kilogram = Miligram/1000000;
	// hare declare the formula
	printf("Your Covertion is Kilogram = %f kg \n", Kilogram);
	// here is result which user wants
	return 0;
	// hare is main function return value
}
// hare is the finish the main function and Program
