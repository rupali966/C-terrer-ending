#include<stdio.h>
int main()
{
	float largeDia, smallDia, area;
	printf("Calcualate Rhombus Area : \n");
	printf("----------------------------- \n");
	printf("Enter Rhombus Large Diagnol : ");
	scanf("%f",&largeDia);
	printf("Enter Rhombus Small Diagnol : ");
	scanf("%f",&smallDia);
	area = (smallDia * largeDia)/2;
	printf("Rhombus Area = %f \n", area);
	return 0;
}
