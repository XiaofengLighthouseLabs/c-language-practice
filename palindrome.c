#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 1024
#define STR_LEN 200

int isPalindrome(char *str);

int main()
{
    char buffer[MAX_STR_LEN];
    char str[STR_LEN + 1];

    printf("Please enter a string, I will check if it is palindrome. > ");
    gets(buffer);
    strncpy(str, buffer, STR_LEN);
    str[STR_LEN] = 0;
    printf("\nThe string you entered is : %s", str);
    if(isPalindrome(str) == 1)
    {
        printf("\nThe string %s is palindrome.", str);
    }
    else
    {
        printf("\nThe string %s is not palindrome.", str);
    }

    return 0;
}
int isPalindrome(char *str)
{
    int i, strLength, match;

    strLength = strlen(str);
    match = 1;
    for(i = 0; i <= strLength - 1; i++)
    {
        if(*(str + i) != *(str + strLength - 1 - i))
        {
            match = 0;
            break;
        }
    }
    return match;
}
