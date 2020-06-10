#define PI 3.1415
#include<stdio.h>
#include<math.h>
int main()
{
        float Side, area;
        printf("Calculating Area Of Regular Hexagon \n");
        printf("------------------------ \n");
        printf("Enter length of one side of the hexagon : ");
        scanf("%f",&Side);
        area = (3 / 2) * sqrt(3) * Side * Side;
        printf("Area Of Regular Hexagon : %f m**2 \n",area);
        return 0;
}

