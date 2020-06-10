#include<stdio.h>
int main()
{
	float volume, hight, Base;
	printf("Calculate Prism : \n");
	printf("----------------------------\n");
	printf("Enter Hight of Prism : ");
	scanf("%f",&hight);
	printf("Enter Area of Base : ");
	scanf("%f",&Base);
	volume = Base * hight;
	printf("Prism Volume : %f  m**3 \n", volume);
	return 0;
}
