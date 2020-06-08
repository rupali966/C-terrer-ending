#include<stdio.h> // hare is called  the standerd I/O library for I/O operation
int main() // hare is declare the main finction which return the the int value
{
	float bit, kb;
	// hare is declare the variables
	printf("Enter bit/s to Converting in KB/s = ");
	// hare ssay the user for Enter bit/s to Convertion
	scanf("%f", &bit);
	//Hare get the user input
	kb = bit/8000;
	// hare is declare the covertion formulas
	printf("Your Covertion is KB/s = %f \n", kb);
	// Hare is result which user wants
	return 0;
	// hare is return value wich goes to the function
}
// hare Ennds the main Function and Program
