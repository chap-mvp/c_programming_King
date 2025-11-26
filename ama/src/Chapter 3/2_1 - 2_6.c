#include <stdio.h>
#include <stdlib.h>



int main1()
{
    int d, m, y;
    printf("Enter the date one by one! \n");
    printf("Day/Month/Year: \n");
    scanf("%d%d%d", &d, &m, &y);

    printf("%.4d%.2d%.2d", y, m, d);
}

int main2()
{
    int num, mm, dd, yyyy;
    float price;

    printf("Enter item Number: ");
    scanf("%d", &num);
    printf("Enter unit Price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (price < 10000)
    {
        printf("Item\t\t\tUnit Price\t\tPurchase Date\n%d\t\t\t$ %.2f\t\t\t %d/%d/%d", num, price, dd, mm, yyyy);
        exit(0);
    }
    else
    {
        printf("wrong price!");
        exit(0);
    }
}

int main3()
{
    int p, i, c, n, d;
    printf("Enter the ISBN with DASHES: ");
    scanf("%d-%d-%d-%d-%d", &p, &i, &c, &n, &d);
    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", p, i, c, n, d);
}

int main4()
{
    int one, two, three;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &one, &two, &three);
    printf("%3d.%3d.%4d", one, two, three);
}

int main5()
{

    // [a b c d]
    // [e f g h]
    // [i j k l]
    // [m n o p]
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    printf("Enter the numbers from 1 to 16 in any order:");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
    printf("Row sums: %d %d %d %d\n", a + b + c + d, e + f + g + h, i + j + k + l, m + n + o + p);
    printf("Row columns: %d %d %d %d\n", a + e + f + m, b + f + j + n, c + g + k + o, d + h + l + p);
    printf("Row columns: %d %d\n", a + f + k + p, d + g + j + m);
}

int main6()
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    printf("Enter the fractions fraction: ");
    scanf("%d/%d %d/%d", &num1, &denom1, &num2, &denom2);
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
    return 0;
}