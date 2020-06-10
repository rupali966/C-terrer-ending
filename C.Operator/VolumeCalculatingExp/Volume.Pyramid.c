#include<stdio.h>
int main()
{
	float volume, base, height;
	printf("Calculating Pyramit : \n");
	printf("----------------------- \n");
	printf("Enter the base : ");
	scanf("%f",&base);
	printf("Enter the hight : ");
	scanf("%f",&height);
	volume = (1/3)*base*height;
	printf("Volume Of Pyramit : %f \n", volume);
}
