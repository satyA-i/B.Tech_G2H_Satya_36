#include <stdio.h>
#include <math.h>
int main()
{
    int M;
    int Primary_Diagonal_Sum = 0 , Secondary_Diagonal_Sum = 0;
    printf("Enter length of square Matrix --> ");
    scanf("%d" , &M);
    int arr [M] [M];
    printf("Enter elemnts in the Matrix --> ");
    for (int i = 0 ; i < M ; i++)
    {
        for (int j = 0 ; j < M ; j++)
        {
            scanf("%d" , &arr[i][j]);
        }
    }
    printf("Array in Matrix Form --> \n");
    for (int i = 0 ; i < M ; i++)
    {
        for (int j = 0 ; j < M ; j++)
        {
            printf("%d " , arr[i][j]);
            if (i == j)
            {
                Primary_Diagonal_Sum += arr[i][j];
            }
            if ((i + j) == (M - 1))
            {
                Secondary_Diagonal_Sum += arr[i][j];
            }
        }
        printf("\n");
    }
    printf("Primary Diagonal Sum --> %d \n" , Primary_Diagonal_Sum);
    printf("Seconary Diagonal Sum --> %d" , Secondary_Diagonal_Sum);
    return 0;
}
