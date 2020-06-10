#include<stdio.h>
int main()
{
        float sideA, sideB, Area;
        printf("Calculate Rhombus/Kite Area \n");
        printf("------------------------- \n");
        printf("lengths of the First diagonals  : ");
        scanf("%f",&sideA);
        printf("lengths of the second diagonals  : ");
        scanf("%f",&sideB);
        Area = sideA * sideB * 0.5;
        printf("Rhombus/Kite Tringle Area: %f m**2 \n", Area);
        return 0;
}
