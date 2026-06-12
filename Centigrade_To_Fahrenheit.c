#include <stdio.h>
#include <math.h>
int main()
{
    float Celcius;
    printf("Enter the Temperature in Centigrade --> ");
    scanf("%f" , &Celcius);
    float Fahrenheit = (Celcius / 5) * 9 + 32;
    printf("Temperature in Fahrenheit --> %.2f" , Fahrenheit);
    return 0;
}
