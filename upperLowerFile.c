#include <stdio.h>
#include <stdlib.h>

#define MAX_STR_LEN 80

int main()
{
   FILE *input;
   FILE *output1;
   FILE *output2;
   char line[MAX_STR_LEN + 1];
   char fileName[51];
   int upperLineCounter = 0, otherLineCounter = 0;

   printf("Enter the input file name > ");
   gets(fileName);
   input = fopen(fileName, "r");
   if(!input)
   {
       printf("The input file is not exist!");
   }
   else
   {
       printf("Enter the first output file name > ");
       gets(fileName);
       output1 = fopen(fileName, "w");

       printf("Enter the second ouput file name > ");
       gets(fileName);
       output2 = fopen(fileName, "w");

       while(fgets(line, MAX_STR_LEN + 1, input))
       {
           if(line[0] >= 'A' && line[0] <= 'Z')
           {
               fputs(line, output1);
               upperLineCounter++;
           }
           else
           {
               fputs(line, output2);
               otherLineCounter++;
           }
       }
   }
   printf("The input file has %d lines start with upper case, and %d lines start with other character.", upperLineCounter, otherLineCounter);
   fclose(input);
   fclose(output1);
   fclose(output2);
}
