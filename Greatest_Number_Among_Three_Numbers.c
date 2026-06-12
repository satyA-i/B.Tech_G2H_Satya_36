#include <stdio.h>
#include <math.h>
int main()
{
    int Num1 , Num2 , Num3;
    printf("Enter First Number --> ");
    scanf("%d" , &Num1);
    printf("Enter Second Number --> ");
    scanf("%d" , &Num2);
    printf("Enter Third Number --> ");
    scanf("%d" , &Num3);
    if (Num1 > Num2)
    {
        if (Num1 > Num3)
        {
            printf("%d" , Num1);
            printf(" is Greatest");
        }
    }
    else if (Num2 > Num1 & Num2 > Num3)
    {
        printf("%d" , Num2);
        printf(" is Greatest");
    }
    else 
    {
        printf("%d" , Num3);
        printf(" is Greatest");
    }
    return 0;
}
