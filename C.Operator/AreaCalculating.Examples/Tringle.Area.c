#include<stdio.h>
int main()
{
	float base, height, area;
	printf("Calculate Area Of Tringle \n");
	printf("-------------------------\n");
	printf("Enter base :");
	scanf("%f",&base);
	printf("Enter height :");
	scanf("%f",&height);
	area = (base*height)/2;
	printf("Your Tringle area = %f  m**2 \n",area);
	return 0;
}
