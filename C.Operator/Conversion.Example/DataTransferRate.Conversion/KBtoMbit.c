#include<stdio.h> // hare is called the standerd I/O library to I/O operation 
int main() // hare create the main finction which return the integer value
{
	float kb, Mbit;
	// hare is declare the variable
	printf("Enter Mbit/s to convert in Kb/s =  ");
	// hare ay to user to Enter th Mbit/s to coverting in Kb/s
	scanf("%f", &Mbit);
	// hare get the input from user
	kb = Mbit*125;
	// hare is the declare the formual
	printf("Your Covertion is KB/s = %f \n",kb);
	// hare is the result which user want
	return 0;
	// hare is the return value of the main function
}
// hare is the our main function and program ends
