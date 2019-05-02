/*
Print out all the divisors of a user entered number.
For example:

Enter a positive number. Enter 0 to end: 15
1 3 5 15
4 divisors
sum of divisors: 24

Enter a positive number: 36
1 2 3 4 6 9 12 18 36
9 divisors
sum of divisors: 91

Enter a positive number: 43
1 43
2 divisors
sum of divisors: 44

Enter a positive number: 0
Thanks and bye!

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //clarence variables
    int inputNum, divisor, sum, divisorNumbers;
    //post text loop. Enter 0 to end
    do
    {
        printf("Enter a positive number. Enter 0 to end: ");
        scanf("%d", &inputNum);
        if(inputNum > 0)
        {
            //initializition sum and divisorNumbers
            sum = 0;
            divisorNumbers = 0;
            for(divisor = 1; divisor <= inputNum; divisor = divisor + 1)
            {
                if(inputNum % divisor == 0)
                {
                    //list ench divisor
                    printf("%d ", divisor);
                    //do sum
                    sum = sum + divisor;
                    //update divisorNumbers
                    divisorNumbers = divisorNumbers + 1;
                }
            }
            printf("\n%d divisors", divisorNumbers);
            printf("\nsum of divisors: %d\n\n", sum);
        }
        else if(inputNum == 0)
        {
            printf("Thanks and bye!\n");
        }
        else //error prompt
        {
            printf("Invalid number enter. Please try again.\n\n");
        }
    }while(inputNum != 0);

    return 0;
}
