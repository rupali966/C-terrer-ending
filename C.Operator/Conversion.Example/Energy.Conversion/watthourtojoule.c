#include<stdio.h> // hare call the standerd input output library for input and output
int main() // hare is the main funnction is declare which return the int value 
{
	float watth, joule;
	// hare is declare the variable
	printf("Enter the Watt hour to converting in joule = ");
	// Hare say to the user to Watt hour to converting in joule
	scanf("%f", &watth);
	//Har get the user input
	joule = watth * 3600;
	// hare declare the formula
	printf("Your Convertion is joule = %f J \n", joule);
	// here is rsult which user wants
	return 0;
	// hare is main function return value
}
// hare is the finish the main function and Program
