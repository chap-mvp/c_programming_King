#include <stdio.h>

int main1()
{

    printf("------------------------\nTask 2.1\n\n");
    printf("        *\n");
    printf("       *\n");
    printf("      *\n");
    printf("*    *\n");
    printf(" *  *\n");
    printf("  *");
}

int main2()
{
    float r = 10.0f, pi = 3.14159265359f, fraction = 4.0f / 3.0f, v;

    printf("\n\n------------------------\nTask 2.2\n\n");
    v = fraction * pi * r * r * r;
    printf("%f", v);
}

int main3()
{
    float r = 10.0f, pi = 3.14159265359f, fraction = 4.0f / 3.0f, v;

    printf("\n\n------------------------\nTask 2.3\n\n");
    printf("Insert the radius of the sphere: ");
    scanf("%f", &r);
    v = fraction * pi * r * r * r;
    printf("\n V = %f", v);
}

int main4()
{

    printf("\n\n------------------------\nTask 2.4\n\n");
    float price, tax = 1.05f;
    printf("How much does your item cost? I'll display it with tax - ");
    scanf("%f", &price);
    printf("%f", price);
    printf("\nYou have to pay %.2f$ ", price * tax);
}

int main5()
{
    printf("\n\n------------------------\nTask 2.5\n\n");
    float x;
    printf("I'll calculate for any value of 'x' the following function:\n\nf(x) =  3*x^5 + 2*x^4 - 5*x^3 - x^2 + 7x - 6\n\nWhich value of x would u lke me to calculate? - ");
    scanf("%f", &x);
    printf("\nf(%.2f) = %.2f", x, 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * (x)-6);
}

int main6()
{
    printf("\n\n------------------------\nTask 2.6\n\n");
    float x;
    printf("I'll calculate for any value of 'x' the following function:\n\nf(x) =  3*x^5 + 2*x^4 - 5*x^3 - x^2 + 7x - 6\n\nWhich value of x would u lke me to calculate? - ");
    scanf("%f", &x);
    printf("\nf(%.2f) = %.2f", x, ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
}

int main7()
{
    printf("\n\n------------------------\nTask 2.7\n\n");
    int twenty, ten, five, one, payment, payment_after_twenty, payment_after_ten, payment_after_five, payment_after_one;
    printf("Enter a dollar amount: ");
    scanf("%d", &payment);

    twenty = (payment - (payment % 20)) / 20;
    payment_after_twenty = payment % 20;

    ten = (payment_after_twenty - (payment_after_twenty % 10)) / 10;
    payment_after_ten = payment_after_twenty % 10;

    five = (payment_after_ten - (payment_after_ten % 5)) / 5;
    payment_after_five = (payment_after_ten % 5);

    one = payment_after_five;

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf(" $5 bills: %d\n", five);
    printf(" $1 bills: %d\n", one);
}

int main8()
{
    printf("\n\n------------------------\nTask 2.8\n\n");

    float loan, interest, monthly_interest, payment;

    printf("Enter the amount of loan: ");
    scanf("%f", loan);
    printf("Enter the interest rate: ");
    scanf("%f", interest);
    printf("Enter monthly payment: ");
    scanf("%f", payment);

    printf("");

    monthly_interest = 1.0f + (interest / 100.0f / 12.0f);

    printf("Balance remaining after 1st Month: %f", loan - 1 * payment * monthly_interest);
    printf("Balance remaining after 2nd Month: %f", loan - 2 * payment * monthly_interest);
    printf("Balance remaining after 3rd Month: %f", loan - 3 * payment * monthly_interest);
}