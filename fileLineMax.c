#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN 80

//develope a code that gets a file name and a line length.
//get two output files
//if the line is shorter than lineMax, it puts it in output 1 (strlen)
//if the line is longer than lineMax, it puts it in output 2

int main()
{
    FILE* input;
    FILE* output1;
    FILE* output2;
    char line[MAX_LINE_LEN + 1];
    int lineMax;
    char fileName[51];
    char ch;
    int lineCounter1 = 0,lineCounter2 = 0;;

    printf("Please enter the input file name > ");
    gets(fileName);
    input = fopen(fileName, "r");
    if(!input)
    {
        printf("The input file is not exist!");
    }
    else
    {
        printf("Please enter the first output file name > ");
        gets(fileName);
        output1 = fopen(fileName, "w");

        printf("Please enter the second output file name > ");
        gets(fileName);
        output2 = fopen(fileName, "w");

        printf("Please enter the line length (max 80) > ");
        scanf("%d", &lineMax);
        scanf("%c", &ch);


        while(fgets(line, MAX_LINE_LEN, input))
        {
           if(strlen(line) < lineMax)
           {
               fputs(line, output2);
               lineCounter2 = lineCounter2 + 1;
           }

           else
           {
               fputs(line, output1);
               lineCounter1 = lineCounter1 + 1;
           }

        }

    }

        printf("\nI put %d lines in the frist result file, and %d lines in the second file", lineCounter1, lineCounter2);
        fclose(input);
        fclose(output1);
        fclose(output2);

    return 0;
}
