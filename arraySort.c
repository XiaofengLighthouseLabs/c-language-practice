#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    //Declare varibles
    float arr[SIZE];
    float sortedArr[SIZE];
    float temp;
    int i, j, match, sumSwitch;

    //Get array from user and print it. Copy arr to sortedArr.
    printf("Please enter an array which contains %d elements: \n", SIZE);
    for(i = 0; i <= SIZE - 1; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf(" %f", &arr[i]);
    }
    printf("\nThe array you entered is: ");
    for(i = 0; i <= SIZE - 1; i++)
    {
        printf("%g ", arr[i]);
        sortedArr[i] = arr[i];
    }
    //Sort the sortedArr. Calculate sthe switch times.
    sumSwitch = 0;
    for(i = 0; i<= SIZE - 2; i++)
    {
        for(j = i + 1; j <= SIZE - 1; j++)
        {
            if(sortedArr[i] > sortedArr[j])
            {
                temp = sortedArr[i];
                sortedArr[i] = sortedArr[j];
                sortedArr[j] = temp;
                sumSwitch++;
            }
        }
    }
    printf("\nThe sorted array is: ");
    for(i = 0; i <= SIZE - 1; i++)
    {
        printf("%g ", sortedArr[i]);
    }
    match = 1;
    for(i = 0; i <= SIZE - 1; i++)
    {
        if(arr[i] != sortedArr[i])
        {
            match = 0;
        }
    }
    if(match == 1)
    {
        printf("\nAll element didn't change the position after sorting");
    }
    else
    {
        printf("\n%d times two array elements were switched to make the sort happen", sumSwitch);
    }

    return 0;
}
