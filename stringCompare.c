#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 1024
#define STR_LEN 200

int main()
{
    //declare veribles
    char safeStr[MAX_STR_LEN];
    char str1[STR_LEN + 1];
    char str2[STR_LEN + 1];
    int str1Length, str2Length, i, isSame, sumDif;
    printf("Please enter a first string (max %d chars): \n", STR_LEN);
    //get the first string. use safeStr to make sure the max chars is 200
    gets(safeStr);
    strncpy(str1, safeStr, STR_LEN);
    str1[STR_LEN] = 0;
    printf("The first string you entered is:  %s", str1);

    printf("\nPlease enter a second string (max %d chars): \n", STR_LEN);
    //get the second string
    //use safeStr to make sure the max chars is 200
    gets(safeStr);
    strncpy(str2, safeStr, STR_LEN);
    str2[STR_LEN] = 0;
    printf("The second string you entered is:  %s", str2);

    str1Length = strlen(str1);
    str2Length = strlen(str2);
    //check two strings have same stringLength
    //check two strings is same or not
    //sum different letters between two strings
    isSame = 1;
    sumDif = 0;

    if(str1Length == str2Length)
    {
        for(i = 0; i<= str1Length - 1; i++)
        {
            if(str1[i] != str2[i])
            {
                sumDif = sumDif + 1;
                isSame = 0;
            }
            else
            {
                continue;
            }
        }
        if(isSame == 0)
        {
            printf("\nYour strings are different in %d places.", sumDif);
        }
        else
        {
            printf("\nYour strings are the same.");
        }
    }
    else
    {
        printf("\nThe two strings are not of the same length!");
    }




    return 0;
}
