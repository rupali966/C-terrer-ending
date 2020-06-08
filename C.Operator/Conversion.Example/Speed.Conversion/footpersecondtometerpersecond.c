#include<stdio.h> // hare call the standerd input output library for input and output
int main() // hare is the main funnction is declare which return the int value 
{
	float meterpersecond, footpersecond;
	// hare is declare the variable
	printf("Enter foot/second to Covert in meter/second : ");
	// Hare say to the user to foot/second to Covert in meter/second
	scanf("%f",&footpersecond);
	//Har get the user input
	meterpersecond = footpersecond/3.281;
	// hare declare the formula
	printf("Your Covertion is meter/second = %f meter/second \n", meterpersecond);
	// here is result which user wants
	return 0;
	// hare is main function return value
}
// hare is the finish the main function and Program
