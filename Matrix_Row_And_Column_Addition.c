#include <stdio.h>
#include <math.h>
int main()
{
    int Row , Column;
    printf("Enter Number of Rows of Matrix --> ");
    scanf("%d" , &Row);
    printf("Enter Number of Columns of Matrix --> ");
    scanf("%d" , &Column);
    int arr [Row] [Column];
    printf("Enter elemnts in the Matrix --> ");
    for (int i = 0 ; i < Row ; i++)
    {
        for (int j = 0 ; j < Column ; j++)
        {
            scanf("%d" , &arr[i][j]);
        }
    }
    printf("Array in Matrix Form --> \n");
    for (int i = 0 ; i < Row ; i++)
    {
        for (int j = 0 ; j < Column ; j++)
        {
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }
    printf("Sum of Rows: \n");
    for (int i = 0 ; i < Row ; i++)
    {
        int Row_Sum = 0;
        for (int j = 0 ; j < Column ; j++)
        {
            Row_Sum += arr[i][j];
        }
        printf("Row %d -->" , i+1);
        printf("%d \n" , Row_Sum);
    }
    printf("Sum of Columns: \n");
    for (int i = 0 ; i < Column ; i++)
    {
        int Column_Sum = 0;
        for (int j = 0 ; j < Row ; j++)
        {
            Column_Sum += arr[j][i];
        }
        printf("Column %d -->" , i+1);
        printf("%d \n" , Column_Sum);
    }
}
