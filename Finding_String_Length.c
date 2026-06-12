#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char Str [100];
    printf("Enter String --> \n");
    fgets(Str , sizeof(Str) , stdin);
    printf("%lu" , strlen(Str));
}
