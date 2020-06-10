#include<stdio.h>
#define PI 3.1415
#include<math.h>
int main()
{
	float volume, RadiausA, RadiausB, height;
	printf("Calculating Solid torus  Volume : \n");
	printf("----------------------------------- \n");
	printf("Enter the Radius of External : ");
	scanf("%f",&RadiausA);
	printf("Enter the Radius of Internal  : ");
	scanf("%f",&RadiausB);
	volume = 2 * RadiausA * RadiausA * RadiausB * PI * PI;
	printf("Volume Of Solid torus   : %f m**3 \n", volume);
}
