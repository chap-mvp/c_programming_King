#include <stdio.h>



int main7()
{
    int twenty, ten, five, one;
    int payment;
    int payment_after_twenty;
    int payment_after_ten;
    int payment_after_five;
    int payment_after_one;

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

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    
}

int main() {
    main7();
}