#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 1024
#define STR_LEN 200

int main()
{
    //declare variables
    char safeStr[MAX_STR_LEN];
    char str[STR_LEN + 1];
    char strRev[STR_LEN + 1];
    int stringLength, i;

    printf("Please enter a string (max %d chars), I will reverse it.> ", STR_LEN);
    //use sefeStr to make sure user's input can not over 200 chars
    gets(safeStr);
    strncpy(str, safeStr, STR_LEN);
    str[STR_LEN] = 0;
    printf("The string you entered is:  %s", str);
    strncpy(strRev, str, STR_LEN);
    strRev[STR_LEN] = 0;
    stringLength = strlen(str);
    //do the reverse and print it out as strRev (keep the original str)
    for(i = 0; i <= stringLength - 1; i++)
    {
        strRev[i] = str[stringLength - 1 - i];
    }
    printf("\nThe reversed string is:  %s", strRev);
    return 0;
}
