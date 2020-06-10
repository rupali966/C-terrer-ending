#include<stdio.h>
#include<math.h>
int main()
{
	float sideA, sideB, sideC, perimeter, Area;
	printf("Calculate Deferent side Triangle Area \n");
	printf("------------------------- \n");
	printf("Enter SideA : ");
	scanf("%f",&sideA);
	printf("Enter SideB : ");
	scanf("%f",&sideB);
	printf("Enter SideC : ");
	scanf("%f",&sideC);
	perimeter = (sideA + sideA + sideA)/2;
	Area = sqrt(perimeter * ((perimeter - sideA) * (perimeter - sideB) * (perimeter - sideC)));
	printf("Tringle Area: %f m**2 \n", Area);
	return 0;
}
