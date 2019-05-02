/*
Create a flow chart of a program that get a number from the user and creates the following pattern.
Example
Please enter a positive integer (1-10, 0 to end): 7

*
**
***
****
*****
******
*******

Please enter a positive integer (1-10, 0 to end): 4

*
**
***
****
*****

Please enter a positive integer (1-10, 0 to end): 14

Invalid input!
Please enter a positive integer (1-10, 0 to end): 2

*
**

Please enter a positive integer (1-10, 0 to end): 0

Thanks and Bye!
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring variables.
    int num, row, col;
    //post test loop. Enter 0 to end.
    do
    {
        printf("Please enter a positive integer (1 - 10, 0 to end): ");
        scanf("%d", &num);
        printf("\n");
        if(num > 0 && num <= 10)
        {
            for(row = 1; row <= num; row = row + 1)  // The number of rows should equal num after loop
            {
                for(col = 1; col <= row; col = col +1) //print col *. The number of * should equal the value of row at that loop.
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("\n");
        }
        else if (num == 0)
        {
            printf("Thanks and Bye!\n");
        }
        else //error prompt
        {
            printf("Invalid input!\n");
        }
    }
    while(num != 0);


    return 0;
}
