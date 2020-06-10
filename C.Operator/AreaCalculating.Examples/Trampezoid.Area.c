#include<stdio.h>
int main()
{
	float largeSide, smallSide, height, area;
	printf("Calculating the Trampezoid area \n");
	printf("--------------------------------- \n");
	printf("Enter the Trampezoid large side: ");
	scanf("%f",&largeSide);
	printf("Enter the Trampezoid small side: ");
	scanf("%f",&smallSide);
	printf("Enter the Trampezoid Height : ");
	scanf("%f",&height);
	area =((largeSide + smallSide)/2)*height;
	printf("Trampezoid area = %f m**2 \n",area);
	return 0;
}
