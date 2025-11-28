/*
In one state, single residents are subject to the following income tax:

Income              Amount of tax
Not over $750 1% of income
$750–$2,250         $7.50 plus 2% of amount over $750
$2,250–$3,750       $37.50 plus 3% of amount over $2,250
$3,750–$5,250       $82.50 plus 4% of amount over $3,750
$5,250–$7,000       $142.50 plus 5% of amount over $5,250
Over $7,000         $230.00 plus 6% of amount over $7,000

Write a program that asks the user to enter the amount of taxable income, then displays the
tax due.
*/

#include <stdio.h>

float dueTax(float income) {
    float tax;
    float fee;
    float totalPayment;
    if (income < 750) {
        totalPayment = 0;        
    }
    else if (income > 750 && income <= 2250) {
        fee = 7.50;
        totalPayment = fee + (income - 750) * 0.02;        
    }
    else if (income > 2250 && income <= 3750) {
        fee = 37.50;
        totalPayment = fee + (income - 2250) * 0.03;
    }
    else if (income > 3750 && income <= 5250) {
        fee = 82.50;
        totalPayment = fee + (income - 3750) * 0.04;
    }
    else if (income > 5250 && income <= 7000) {
        fee = 142.50;
        totalPayment = fee + (income - 5250) * 0.05;
    }
    else {
        fee = 230;
        totalPayment = fee + (income - 7000) * 0.06;
    }
    printf("You have to pay %.2f in income tax.", totalPayment);
}

int main() {
    float income;
    printf("How much do you make?");
    scanf("%.2f", &income);
    dueTax(income);
}