#include <stdio.h>
#include <math.h>
int main()
{
    int a , b , temp;
    printf("Enter First Number --> ");
    scanf("%d" , &a);
    printf("Enter Second Number --> ");
    scanf("%d" , &b);
    temp = a;
    a = b;
    b = temp;
    printf("Value of 'a' --> %d \n" , a);
    printf("Value of 'b' --> %d" , b);
    return 0;
}
