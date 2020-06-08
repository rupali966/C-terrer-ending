#include<stdio.h> // hare call the standerd input output library for input and output
int main() // hare is the main funnction is declare which return the int value 
{
	float bar, atmospeir;
	// hare is declare the variable
	printf("Enter atmospeir to Covert in bar : ");
	// Hare say to the user to atmospeir to Covert in bar
	scanf("%f",&atmospeir);
	//Har get the user input
	bar = atmospeir*1.013;
	// hare declare the formula
	printf("Your Covertion is bar = %f bar aprox \n", bar);
	// here is result which user wants
	return 0;
	// hare is main function return value
}
// hare is the finish the main function and Program
