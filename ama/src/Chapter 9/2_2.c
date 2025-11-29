#include <stdio.h>

double dueTaxStarter();
double dueTax(double);

int main()
{
    dueTaxStarter();
}


double dueTaxStarter()
{
    double income;
    printf("How much do you make?");
    scanf("%lf", &income);
    dueTax(income);
}

double dueTax(double income)
{
    double tax = 0;
    double fee = 0;
    double totalPayment;
    if (income < 750)
    {
        totalPayment = 0;
    }
    else if (income > 750 && income <= 2250)
    {
        fee = 7.50;
        totalPayment = fee + (income - 750) * 0.02;
    }
    else if (income > 2250 && income <= 3750)
    {
        fee = 37.50;
        totalPayment = fee + (income - 2250) * 0.03;
    }
    else if (income > 3750 && income <= 5250)
    {
        fee = 82.50;
        totalPayment = fee + (income - 3750) * 0.04;
    }
    else if (income > 5250 && income <= 7000)
    {
        fee = 142.50;
        totalPayment = fee + (income - 5250) * 0.05;
    }
    else
    {
        fee = 230;
        totalPayment = fee + (income - 7000) * 0.06;
    }
    printf("You have to pay $%.2lf in income tax, with $%.2lf fee", totalPayment, fee);
}