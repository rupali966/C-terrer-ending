#include<stdio.h>
int main()
{
	float base, height, Area;
	printf("Calculate Deferent side Triangle Area \n");
	printf("------------------------- \n");
	printf("Enter base : ");
	scanf("%f",&base);
	printf("Enter height : ");
	scanf("%f",&height);
	Area = 0.5 * base * height;
	printf("Tringle Area: %f m**2 \n", Area);
	return 0;
}
