#include <stdio.h>
#include <math.h>
int main()
{
    float Sub1 , Sub2 , Sub3 , Sub4 , Sub5;
    printf("Enter Marks of First Subject out of 100 --> ");
    scanf("%f" , &Sub1);
    printf("Enter Marks of Second Subject out of 100 --> ");
    scanf("%f" , &Sub2);
    printf("Enter Marks of Third Subject out of 100 --> ");
    scanf("%f" , &Sub3);
    printf("Enter Marks of Fourth Subject out of 100 --> ");
    scanf("%f" , &Sub4);
    printf("Enter Marks of Fifth Subject out of 100 --> ");
    scanf("%f" , &Sub5);
    float Sum = Sub1 + Sub2 + Sub3 + Sub4 + Sub5;
    printf("Sum of all the marks --> %.2f \n" , Sum);
    float Percentage = Sum/5;
    printf("Your Percentage is --> %.2f" , Percentage);
    return 0;
}
