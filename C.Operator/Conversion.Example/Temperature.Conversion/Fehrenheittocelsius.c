#include<stdio.h> // hare call the standerd input output library for input and output
int main() // hare is the main funnction is declare which return the int value 
{
	float celsius, Fehrenheit;
	// hare is declare the variable
	printf("Enter Fehrenheit to Covert in celsius : ");
	// Hare say to the user to Fehrenheit to Covert in celsius
	scanf("%f",&Fehrenheit);
	//Har get the user input
	celsius = (Fehrenheit - 32) * 5/9;
	// hare declare the formula
	printf("Your Covertion is celsius = %f celsius \n", celsius);
	// here is result which user wants
	return 0;
	// hare is main function return value
}
// hare is the finish the main function and Program
