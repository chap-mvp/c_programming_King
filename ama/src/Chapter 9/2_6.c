#include <stdio.h>
#include <math.h>

double polynomial()
{
    double x = 0;
    printf("Enter a Value for X to calculate the polynomial (3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6): ");
    scanf("%lf", &x);
    printf("%.2lf", 3 * pow(x, 5) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6);
}

int main()
{
    polynomial();
}