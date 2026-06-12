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
    int S;
    printf("Enter Elment whose Frequency is to be found --> ");
    scanf("%d" , &S);
    int count = 0;
    for (int i = 0 ; i < Row ; i++)
    {
        for (int j = 0 ; j < Column ; j++)
        {
            if (arr[i][j] == S)
            {
                count++;
            }
        }
    }
    printf("%d is " , S);
    printf("'%d' times in the Matrix" , count);
    return 0;
}
