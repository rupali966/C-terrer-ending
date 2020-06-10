#define PI 3.14159265358979323846
#include<stdio.h>
int main()
{
	float radius, perimeter, Cirarea;
	printf("Calcualate Circle Area \n");
	printf("------------------------- \n");
	printf("Enter The Radious :");
	scanf("%f",&radius);
	Cirarea = PI * radius * radius;
	perimeter = PI * 2 * radius;
	printf("Circle Perimeter : %f m\n",perimeter );
	printf("Circle Area : %f m**2 \n", Cirarea);
	return 0;
}
