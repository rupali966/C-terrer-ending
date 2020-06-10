#include<stdio.h>
#define PI 3.1415
#include<math.h>
int main()
{
	float volume, RadiausA, RadiausB, RadiausC;
	printf("Calculating Ellipsoid  : \n");
	printf("----------------------------------- \n");
	printf("Enter the Radius 1st : ");
	scanf("%f",&RadiausA);
	printf("Enter the Radius 2nd : ");
	scanf("%f",&RadiausB);
	printf("Enter the Radius 3rd : ");
	scanf("%f",&RadiausC);
	volume = (4 / 3) * RadiausA * RadiausB * RadiausC * PI ;
	printf("Volume Of Ellipsoid : %f m**3 \n", volume);
}
