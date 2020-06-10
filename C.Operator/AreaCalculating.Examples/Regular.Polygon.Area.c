#define PI 3.1415
#include<stdio.h>
#include<math.h>
int main()
{
        float Side, area, NumberOfSide;
        printf("Calculating Area Of Regular polygon \n");
        printf("------------------------ \n");
        printf("Enter length of one side of Regular polygon l(lenght)  : ");
        scanf("%f",&Side);
	printf("Enter length of one side of Regular polygon n(number of side)  : ");
        scanf("%f",&NumberOfSide);
        area = (1/2)*NumberOfSide*Side*Side*(1/((tan(PI/NumberOfSide))));
        printf("Area Of Regular polygon: %f m**2 \n",area);
        return 0;
}
