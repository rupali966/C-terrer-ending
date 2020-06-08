#include<stdio.h> // hare is call the standerd I/O library for I/O operation
int main() // hare is the main function which returrn int value
{
	float meter, mile; // hare is the declare the variable 
	printf("Enter Mile To Convert In Meter : ");
	// hare say to enter meter for converting the meter
	scanf("%f", &mile);
	// hare get input from user
	meter = mile / 0.00062137;
	// hare is the formula of conerting
	printf("The Your Meter Is = %f mi \n", meter);
	// hare is the output of the result
	return 0;
	// hare is the return to the fuunction 
}
// hare is finish the main function and program
