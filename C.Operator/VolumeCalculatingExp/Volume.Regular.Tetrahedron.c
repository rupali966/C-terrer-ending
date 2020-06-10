#include<stdio.h>
#include<math.h>
int main()
{
	float volume, OneSideArea;
	printf("Calculating Regular tetrahedron  : \n");
	printf("----------------------------------- \n");
	printf("Enter the One side Of Area : ");
	scanf("%f",&OneSideArea);
	volume = sqrt(2)/12 * OneSideArea * OneSideArea * OneSideArea;
	printf("Volume Of tetrahedron : %f \n", volume);
}
