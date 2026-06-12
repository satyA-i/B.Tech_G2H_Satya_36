#include <stdio.h>
#include <math.h>
int main()
{
    int Num;
    printf("Enter Number --> ");
    scanf("%d" , &Num);
    if (Num % 2 == 0)
    {
        printf("%d" , Num);
        printf(" is an Even Number");
    }
    else
    {
        printf("%d" , Num);
        printf(" is a Odd Number");
    }
    return 0;
}
