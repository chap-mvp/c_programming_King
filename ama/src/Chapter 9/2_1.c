#include <stdio.h>

int selection_sort(int n, int a[n])
{

    int max = a[0];


    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            a[i] = a[n];
            a[n] = max;
            selection_sort(n - 1, *a[n]);
        }
    }
}

int main()
{
    int n;
    printf("How many Elements does your array have? ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the Elements of your array (1, 2, ...): \n");
    for (int i = 0; i < n; i++)
    {
        printf("[%d. Element] - ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("[%d] ", a[i]);
    }
    selection_sort(n, *a[n]);
}


/*
In one state, single residents are subject to the following income tax:
Income              Amount of tax
Not over $750       1% of income
$750–$2,250         $7.50 plus 2% of amount over $750
$2,250–$3,750       $37.50 plus 3% of amount over $2,250
$3,750–$5,250       $82.50 plus 4% of amount over $3,750
$5,250–$7,000       $142.50 plus 5% of amount over $5,250
Over $7,000         $230.00 plus 6% of amount over $7,000
Write a program that asks the user to enter the amount of taxable income, then displays the
tax due.
*/