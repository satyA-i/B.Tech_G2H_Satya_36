#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char Str [100];
    printf("Enter String --> \n");
    fgets(Str , sizeof(Str) , stdin);
    char Rev_Str[strlen(Str)];
    int j = 0;
    for (int i = strlen(Str) - 1 ; i >= 0 ; i-- , j++)
    {
        Rev_Str[j] = Str[i];
    }
    printf("String After Reversing --> ");
    printf("%s" , Rev_Str);
    return 0;
}
