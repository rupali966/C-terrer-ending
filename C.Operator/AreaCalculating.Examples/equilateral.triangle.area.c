#include<stdio.h>
#include<math.h>
int main()
{
	float side, Area;
	printf("Calculate Equilateral Triangle Area \n");
	printf("------------------------- \n");
	printf("Enter Side : ");
	scanf("%f",&side);
	Area = (sqrt(3)/4)*side*side;
	printf("Tringle Area: %f m**2 \n", Area);
	return 0;
}
