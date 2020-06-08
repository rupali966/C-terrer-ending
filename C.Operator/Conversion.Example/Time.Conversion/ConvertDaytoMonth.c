#include <stdio.h> 
// Hare call the standerd input output header file 
// for doing the operation
int main() 
// hare is declare the main function 
// and that function return the int value 
{
	int months, days;
	// hare id Declaare the days and mouths
	printf("Enter days \n");
	// hare we say to Enter days for operation
	scanf("%d", &days);
	// hare we gate the input 
	months = days / 30;
	// hare we convert days to month
	days = days % 30;
	// hare we get expted tay that not become mounth
	printf("Months = %d Days = %d \n\n ", months, days);
	// hare simply represent the result as simmple as
}
// hare end the main function and owr program
