#include<stdio.h>
#include<math.h>
int main()
{
        float sideA, sideB, sideC, perimeter, Area;
        printf("Calculate Isosceles triangle Area \n");
        printf("------------------------- \n");
        printf("Enter length of one of the two equal sides  : ");
        scanf("%f",&sideA);
        printf("Enter length of a different side : ");
        scanf("%f",&sideB);
        Area = (sideB / 4) * sqrt(4 * sideA * sideA - sideB * sideB);
        printf("Isosceles Tringle Area: %f m**2 \n", Area);
        return 0;
}
