#include <stdio.h>
#include <math.h>
int main()
{
    int L;
    printf("Enter Length of Array --> ");
    scanf("%d" , &L);
    int arr[L];
    for (int i = 0 ; i < L ; i++)
    {
        scanf("%d" , &arr[i]);
    }
    int Sum;
    for (int i = 0 ; i < L ; i++)
    {
        Sum += arr[i];
    }
    float Average = Sum / L;
    printf("Sum of all Elements Of Array --> %d \n" , Sum);
    printf("Average --> %.2f" , Average);
    return 0;
}
