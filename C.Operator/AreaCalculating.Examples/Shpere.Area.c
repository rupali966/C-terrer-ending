#define PI 3.1415
#include<stdio.h>
int main()
{
        float Radius, area;
        printf("Calculating Area Of Sphere \n");
        printf("------------------------ \n");
        printf("Enter Radius : ");
        scanf("%f",&Radius);
        area = PI * Radius * Radius * 4;
        printf("Area Of Sphere : %f m**2 \n",area);
        return 0;
}
