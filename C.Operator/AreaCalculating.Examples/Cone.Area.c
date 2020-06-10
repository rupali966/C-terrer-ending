#define PI 3.1415
#include<stdio.h>
int main()
{
	float Radius, height, area;
	printf("Calculating Area Of Cone \n");
	printf("------------------------ \n");
	printf("Enter Radius :");
	scanf("%fi",&Radius);
	printf("Enter Slant Height :");
	scanf("%f",&height);
	area = PI * Radius * height;
	printf("Area Of Cone : %f \n",area);
	return 0;
}
