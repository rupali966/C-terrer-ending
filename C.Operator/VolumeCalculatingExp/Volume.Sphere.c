#include<stdio.h>
#define PI 3.1415
#include<math.h>
int main()
{
	float volume, Radiaus;
	printf("Calculating Sphere  : \n");
	printf("----------------------------------- \n");
	printf("Enter the Radius : ");
	scanf("%f",&Radiaus);
	volume = (4 / 3) * Radiaus * Radiaus * Radiaus * PI ;
	printf("Volume Of Sphere : %f m**3 \n", volume);
}
