#include<stdio.h> // hare call the standerd input output library for input and output
int main() // hare is the main funnction is declare which return the int value 
{
	float meter, yard;
	// hare declare the variable
	printf("Enter yard to convert meter: ");
	// hare say to enter yard to converting in meter
	scanf("%f", &yard);
	// hare get the input from user
	meter = yard/1.0936;
	// hare is coverting the formula
	printf("Your meter is = %f m \n", meter);
	// hare is the output result for user want
	return 0;
	// hare value is return to the function
}
// hare is the finich the main function and program
