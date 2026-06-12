#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char Str [100];
    printf("Enter String --> \n");
    fgets(Str , sizeof(Str) , stdin);
    int A_Count = 0 , E_Count = 0 , O_Count = 0 , I_Count = 0 , U_Count = 0;
    for (int i = 0 ; i < strlen(Str) ; i++)
    {
        if (Str[i] == 'A' || Str[i] == 'a')
        {
            A_Count++;
        }
        else if (Str[i] == 'E' || Str[i] == 'e')
        {
            E_Count++;
        }
        else if (Str[i] == 'I' || Str[i] == 'i')
        {
            I_Count++;
        }
        else if (Str[i] == 'O' || Str[i] == 'o')
        {
            O_Count++;
        }
        else if (Str[i] == 'U' || Str[i] == 'u')
        {
            U_Count++;
        }
    }
    printf("Total Number of Vowels --> %d \n" , (A_Count + E_Count + I_Count + O_Count + U_Count));
    printf("'A' --> %d \n" , A_Count);
    printf("'E' --> %d \n" , E_Count);
    printf("'I' --> %d \n" , I_Count);
    printf("'O' --> %d \n" , O_Count);
    printf("'U' --> %d" , U_Count);
    return 0;
}
