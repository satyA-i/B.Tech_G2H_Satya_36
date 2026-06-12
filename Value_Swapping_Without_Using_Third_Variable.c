#include <stdio.h>
#include <math.h>
int main()
{
    int a , b;
    printf("Enter First Number --> ");
    scanf("%d" , &a);
    printf("Enter Second Number --> ");
    scanf("%d" , &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Value of 'a' --> %d \n" , a);
    printf("Value of 'b' --> %d" , b);
    return 0;
}
