#include<stdio.h>
int main()
{
	float width, height, Area;
	printf("Calculate Reclangle Area \n");
	printf("------------------------- \n");
	printf("Enter Width : ");
	scanf("%f",&width);
	printf("Enter Height : ");
        scanf("%f",&height);
	Area = width * height;
	printf("Reclangle Area: %f m**2 \n", Area);
	return 0;
}
