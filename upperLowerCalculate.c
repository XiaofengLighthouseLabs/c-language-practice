#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 1024
#define STR_LEN 200

int main()
{
    //declare veribles
    char safeStr[MAX_STR_LEN];
    char str[STR_LEN + 1];
    int stringLength, i, upper, lower;

    printf("Please enter a string (max %d chars): \n", STR_LEN);
    //use safeStr to make sure the max chars is 200
    gets(safeStr);
    strncpy(str, safeStr, STR_LEN);
    str[STR_LEN] = 0;
    printf("The string you entered is: %s", str);
    stringLength = strlen(str);
    //calculate upper case chars and lower case chars from 0
    upper = 0;
    lower = 0;

    for(i = 0; i <= stringLength - 1; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            upper++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            lower++;
        }
    }
    printf("\n\nYour string has %d characters, %d of them are lower case and %d of them are upper case alphabet letters.", stringLength, lower, upper);
    return 0;
}
