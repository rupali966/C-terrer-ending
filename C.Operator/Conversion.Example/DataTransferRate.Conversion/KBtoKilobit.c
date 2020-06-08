#include<stdio.h>  // hare is called Standerd I/O library For I/O operation
int main() // hare create the main function which return the Interger value
{
	float kb, kilobit;
	// hare is declare the variable 
	printf("Enter Kilobit/s to converting in Kb/s = ");
	// Hare say the Youser to enter the Kilobit/s to covert In KB/s
	scanf("%f", &kilobit);
	// Hare get the input from user
	kb = kilobit/8;
	// hare is declare the covertion math formula
	printf("Your Convertion is KB/s = %f kb/s \n", kb);
	// hare is the Result which youser wants
	return 0;
	// Hare is the Return value wich goes to the main function
}
// hare end the main function and Program
