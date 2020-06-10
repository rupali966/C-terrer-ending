#include<stdio.h>
int main()
{
        float sideA, sideB, Area;
        printf("Calculate Rhombus/Kite Area \n");
        printf("------------------------- \n");
        printf("Enter length of the base  : ");
        scanf("%f",&sideA);
        printf("Enter the perpendicular height : ");
        scanf("%f",&sideB);
        Area = sideA * sideB;
        printf("Parallelogram Area: %f m**2 \n", Area);
        return 0;
}

