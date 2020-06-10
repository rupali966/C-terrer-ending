#define PI 3.1415
#include<stdio.h>
#include<math.h>
int main()
{
        float areaA, apothem, Perimeter;
        printf("Calculating Area Of Regular polygon \n");
        printf("------------------------ \n");
	printf("Enter the apothem ");
        scanf("%f",&apothem);
	printf("Enter perimeter of the polygon ");
        scanf("%f",&Perimeter);
        areaA = (1/2)*apothem*Perimeter;
        printf("Area Of Regular polygon: %f m**2 \n",areaA);
        return 0;
}

