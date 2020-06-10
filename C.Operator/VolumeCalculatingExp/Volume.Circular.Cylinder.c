#include<stdio.h>
#define PI 3.1415
#include<math.h>
int main()
{
	float volume, Radiaus, height;
	printf("Calculating Circular Cylinder Volume : \n");
	printf("----------------------------------- \n");
	printf("Enter the Radius : ");
	scanf("%f",&Radiaus);
	printf("Enter the Height : ");
	scanf("%f",&height);
	volume = Radiaus * Radiaus * height * PI ;
	printf("Volume Of Circular Cylinder  : %f m**3 \n", volume);
}
