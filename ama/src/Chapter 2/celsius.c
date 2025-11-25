#include <stdio.h>
#define FREEZING_PNT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main()
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit Temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PNT) * SCALE_FACTOR;

    printf("Temp in C°: %.1f", celsius);

    return 0;
}