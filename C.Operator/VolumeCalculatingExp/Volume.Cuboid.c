#include<stdio.h>
int main()
{
	float volume, sideA, sideB, sideC;
	printf("Calculate Cuboid : \n");
	printf("----------------------------\n");
	printf("Enter Side First : ");
	scanf("%f",&sideA);
	printf("Enter Side Second: ");
	scanf("%f",&sideB);
	printf("Enter Side Third: ");
	scanf("%f",&sideC);
	volume = sideA * sideB * sideC;
	printf("Cuboid Volume : %f  m**3 \n", volume);
	return 0;
}
