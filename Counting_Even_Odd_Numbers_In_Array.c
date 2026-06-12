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
    int Even_Count = 0 , Odd_Count = 0;
    printf("Array in Matrix Form --> \n");
    for (int i = 0 ; i < Row ; i++)
    {
        for (int j = 0 ; j < Column ; j++)
        {
            printf("%d " , arr[i][j]);
            if (arr[i][j] % 2 == 0)
            {
                Even_Count++;
            }
            else
            {
                Odd_Count++;
            }
        }
        printf("\n");
    }
    printf("Count of Even Numbers --> %d \n" , Even_Count);
    printf("Count of Odd Numbers --> %d \n" , Odd_Count);
    return 0;
}
