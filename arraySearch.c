#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 10

int main()
{
    //declare varibles;
    int array[ARR_SIZE];
    int i, sum;
    int num;
    //get array from user and print it out
    printf("Enter an array (%d numbers): \n", ARR_SIZE);
    for(i = 0; i <= ARR_SIZE - 1; i++)
    {
        printf("Please enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("The array you entered is: ");
    for(i = 0; i <= ARR_SIZE - 1; i++)
    {
        printf("%d ", array[i]);
    }
    //user enter the number to be checked
    printf("\nPlease enter the number.We can check if it exists in the array.> ");
    scanf("%d", &num);
    //check if the number can be found in the array
    //sum the occurrences of the number
    sum = 0;
    for(i = 0; i <= ARR_SIZE - 1; i++)
    {
        if(array[i] == num)
        {
            printf("\nNumber %d found in array index %d", num, i);
            sum++;
        }
    }

    if(sum == 0)
    {
        printf("\n%d can not be found in the array.", num);
    }
    else
    {
        printf("\nTotal of %d occurrences of number %d", sum, num);
    }
    return 0;
}
