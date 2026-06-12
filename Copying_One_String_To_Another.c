#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char Str1 [100];
    char Str2 [strlen(Str1)];
    printf("Enter String --> \n");
    fgets(Str1 , sizeof(Str1) , stdin);
    strcpy(Str2 , Str1);
    printf("%s" , Str2);
    return 0;
}
