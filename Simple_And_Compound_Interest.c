#include <stdio.h>
#include <math.h>
int main()
{
    float Principal , Rate , Time;
    printf("Enter your Principal Investment Amount --> ");
    scanf("%f" , &Principal);
    printf("Enter Rate of Interest --> ");
    scanf("%f" , &Rate);
    printf("Enter Time in Years --> ");
    scanf("%f" , &Time);
    float Simple_Interest = (Principal * Rate * Time)/100;
    float Compound_Interest = Principal * pow((1 + (Rate/100)) , Time) - Principal;
    printf("Simple Interest --> %.2f \n" , Simple_Interest);
    printf("Compound Interest --> %.2f" , Compound_Interest);
    return 0;
}
