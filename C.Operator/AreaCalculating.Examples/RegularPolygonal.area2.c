#define PI 3.1415
#include<stdio.h>
#include<math.h>
int main()
{
        double Side, area, NumberOfSide;
        printf("Calculating Area Of Regular polygon \n");
        printf("------------------------ \n");
        printf("Enter length of one side of Regular polygon l(lenght)  : ");
        scanf("%lf",&Side);
        printf("Enter Perimeter Of Polygonal : ");
        scanf("%lf",&NumberOfSide);
        area = (1/(4*NumberOfSide)*Side*Side*(1/tan(PI/NumberOfSide)));
        printf("Area Of Regular polygon: %lf m**2 \n",area);
        return 0;
}

