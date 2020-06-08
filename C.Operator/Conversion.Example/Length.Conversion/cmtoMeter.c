#include<stdio.h> //hare called the standerd input output library
int main() // hare create the main finction which return 0th value to function
{
	float cm, km, meter;
	// hare define the variable
	printf("\n  Enter Lenth of Centimeter : ");
	// hare say to enter cm to get output inn meter and kilometer
	scanf("%f", &cm);
	//hare get the input from user
	meter = cm/100.0;
	// hare conver cm to meter
	km = meter/100.0;
	// hare conver meter to km meter
	printf(" Lenth in meter = %f m \n", meter);
	//hare print out the meter in result
	printf(" lenth in km = %f km \n", km);
	// hare also print out the resul but in kkilometer
	return 0;
	// hare the return value of that function
}
// the function and program is end hare
