#include<stdio.h> // hare call the standerd input output library for input and output
int main() // hare is the main funnction is declare which return the int value 
{
	float gramCalorie, joule;
	// hare is declare the variable
	printf("Enter GramCalorie to convert joule = ");
	// Hare say to the user to GramCalorie to convert joule
	scanf("%f",&gramCalorie);
	//Har get the user input
	joule = gramCalorie * 4.184;
	// hare declare the formula
	printf("Your Calorie to joule is = %f J \n", joule);
	// here is rsult which user wants
	return 0;
	// hare is main function return value
}
// hare is the finish the main function and Program
