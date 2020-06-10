#define PI 3.1415
#include<stdio.h>
#include<math.h>
int main()
{
        float Side, area;
        printf("Calculating Area Of Regular Octagonal \n");
        printf("------------------------ \n");
        printf("Enter length of one side of the Octagonal : ");
        scanf("%f",&Side);
        area = 2 * ( 1 + sqrt(2)) * Side * Side;
        printf("Area Of Regular Octagonal : %f m**2 \n",area);
        return 0;
}
