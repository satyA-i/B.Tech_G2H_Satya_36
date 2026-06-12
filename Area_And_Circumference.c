#include <stdio.h>
#include <math.h>
int main()
{
    float Radius;
    printf("Enter the Radius of the Circle --> ");
    scanf("%f" , &Radius);
    float Area = 3.14 * pow(Radius,2);
    float Circumference = 2 * 3.14 * Radius;
    printf("Area of the Circle --> %.2f \n" , Area);
    printf("Circumference of the Circle --> %.2f" , Circumference);
    return 0;
}
