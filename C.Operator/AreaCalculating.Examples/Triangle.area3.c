#include<stdio.h>
#include<math.h>
int main()
{
	float sideA, sideB, Area;
	double Angle;
	printf("Calculate Deferent side Triangle Area \n");
	printf("------------------------- \n");
	printf("Enter SideA : ");
	scanf("%f",&sideA);
	printf("Enter SideB : ");
	scanf("%f",&sideB);
	printf("Enter Angle : ");
	scanf("%lf",&Angle);
	Area = 0.5 * sideA * sideB * (float)sin(Angle);
	printf("Tringle Area: %f m**2 \n", Area);
	return 0;
}
