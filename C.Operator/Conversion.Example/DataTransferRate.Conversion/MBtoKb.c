#include<stdio.h> // hare called the standerd I/O library for I/O operation
int main() // hare create the main finction to which return the int value 
{
	float kb, mb;
	// hare is declare the variable
	printf("Enter the value for MB/s to covert In KB/s = ");
	// Hare say to the user to enter the MB/s to coverting is KB/s
	scanf("%f",&mb);
	//Har get the user input
	kb = mb*1000;
	// hare declare the formula
	printf("Yor Covertion result is KB/s = %f KB/s \n",kb);
	// here is rsult which user wants
	return 0;
	// hare is main function return value
}
// hare is the finish the main function and Program
