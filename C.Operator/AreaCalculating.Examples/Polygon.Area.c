#include<stdio.h>
int main()
{
        float area, perimeter, apothem;
        printf("Calculate Regular Polygon : \n");
        printf("----------------------------\n");
        printf("Enter Perimeter : ");
        scanf("%f",&perimeter);
        printf("Enter Apothem : ");
        scanf("%f",&apothem);
        area = (perimeter/2) * apothem;
        printf("Regular Polygon area : %f  m**2\n", area);
        return 0;
}
