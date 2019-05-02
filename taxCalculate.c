/*
Develop a code that gets the user's annual salary and calculates both the tax value and the gross income annually and monthly. The tax brackets are

0% up to 10K
17% between 10K and 25K
23% between 25K and 44K
27% between 44K and 86K
31% between 86K and 120K
35% above 120K

Sample Run:
Please enter your annual Salary > 90000
Your total payable tax is: 27900
Your annual net income is: 62100
And your monthly net income is: 5175
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float annualSalary, payableTax, netIncome, monthlyNetIncome;

    do
    {
        printf("Please enter your annual Salary > ");
        scanf("%f", &annualSalary);
        //multiple choice, calculating tax depends on annual salary value.
        if(annualSalary >= 0 && annualSalary <= 10000)
        {
            payableTax = 0 * annualSalary;
        }
        else if(annualSalary > 10000 && annualSalary <= 25000)
        {
            payableTax = 0.17 * annualSalary;
        }
        else if(annualSalary > 25000 && annualSalary <= 44000)
        {
            payableTax = 0.23 * annualSalary;
        }
        else if(annualSalary > 44000 && annualSalary <= 86000)
        {
            payableTax = 0.27 * annualSalary;
        }
        else if(annualSalary > 86000 && annualSalary <= 120000)
        {
            payableTax = 0.31 * annualSalary;
        }
        else if(annualSalary > 120000)
        {
            payableTax = 0.35 * annualSalary;
        }
        else
        {
            printf("Invalid annual salary input.\n");
        }
    }
    while (annualSalary < 0); //If input less than zero, enter annual salary again.
    netIncome = annualSalary - payableTax; // calculate annual net income.
    monthlyNetIncome = netIncome / 12; //calculate monthly net income.
    printf("Your total payable tax is: %.0f", payableTax);
    printf("\nYour annual net income is: %.0f", netIncome);
    printf("\nAnd your monthly net income is: %.0f\n", monthlyNetIncome);

    return 0;
}

