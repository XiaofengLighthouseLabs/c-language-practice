/*
In this assignment we will develop an application to calculate the area and perimeter of geometric shapes. First the user is asked to enter a letter representing the shape. We use C for circle, R for rectangle and S for square.
After the user chooses the shape, the program prompts for the appropriate dimensions of the shape accordingly.  For instance, if the user has chosen a square, the program will ask for a side. If it’s a circle, the program will ask for radius. If it’s a rectangle, it will ask for length and width. An invalid input will be reported and the user should enter the letter again.
Upon receiving the appropriate dimensions, the program will calculate the area and the perimeter of the requested shape and print it on the screen. And again, the code will ask for another letter. If the user enters ‘Q’ the program terminates.

One run of the program will look like this:
Please Enter Shape (C: Circle, S: Square, R: Rectangle Q:quit) >S
Please enter the side of the square > 8

The area is 64 and the perimeter is 32
Please Enter Shape (C: Circle, S: Square, R: Rectangle Q:quit) >R
Please enter the width of the rectangle > 5
Please enter the length of the rectangle > 7
The area is 35 and the perimeter is 24
Please Enter Shape (C: Circle, S: Square, R: Rectangle Q:quit) >Q

Thanks and bye!
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring varibles.
    float radius, side, width, length, pi;
    float area, perimeter;
    char shape;
    //post test loop. Q or q to quit.
    do
    {
        printf("Please Enter Shape.(C:Circle, S:Square, R:Rectangle Q:quit) > ");
        scanf(" %c", &shape);
        //shapes multi selection
        if (shape == 'C' || shape == 'c')
        {
            printf("Please enter the radius of the circle > ");
            scanf("%f", &radius);
            if(radius >= 0)
            {
                pi = 3.14;
                area = pi * radius *radius;
                perimeter = 2 * radius * pi;
                printf("\nThe area is %.2f and the perimeter is %.2f.\n", area, perimeter);
            }
            else  //Here has bug. If enter charactor but not number, the following command will be skiped !!  Why?
            {
                printf("\nInvalid radius enter. Please try again.\n");
            }
        }
        else if (shape == 'S' || shape == 's')
        {
            printf("Please enter the side of the square > ");
            scanf(" %f", &side);
            if(side >= 0)
            {
                area = side * side;
                perimeter = 4 * side;
                printf("\nThe area is %.2f and the perimeter is %.2f.\n", area, perimeter);
            }
            else
            {
                printf("\nInvalid side enter. Please try again.\n");
            }
        }
        else if (shape == 'R' || shape == 'r')
        {
            printf("Please enter the width of the rectangle > ");
            scanf("%f", &width);
            printf("Please enter the length of the rectangle > ");
            scanf(" %f", &length);
            if(width >= 0 && length >= 0)
            {
                area = width * length;
                perimeter = 2 * width + 2 * length;
                printf("\nThe area is %.2f and the perimeter is %.2f.\n", area, perimeter);
            }
            else
            {
                printf("\nInvalid width or length enter. Please try again.\n");
            }
        }
        else if (shape == 'Q' || shape == 'q')
        {
            printf("\nThanks and bye!\n");
        }
        else
        {
            printf("\nInvalid shape enter. Please try again.\n");
        }

    }
    while(shape != 'Q' && shape != 'q');


    return 0;

}
