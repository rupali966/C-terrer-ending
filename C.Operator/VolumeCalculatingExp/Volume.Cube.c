#include<stdio.h>
int main()
{
	float volume, side;
	printf("Calculate Cube : \n");
	printf("----------------------------\n");
	printf("Enter Side : ");
	scanf("%f",&side);
	volume = side * side * side;
	printf("Cube Volume : %f  m**3 \n", volume);
	return 0;
}
