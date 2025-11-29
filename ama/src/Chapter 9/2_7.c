#include <stdio.h>

long long int power(long long int n, long long int x)
{
    if (x == 0)
    {
        return 1;
    }
    if (x % 2 == 0) {
        long long int newPower = power(n, x/2);
        return newPower * newPower;
    }

    return n * power(n, x - 1);
}

int main()
{
    long long int n, x;
    printf("What base n and power does x? (n x) ");
    scanf("%lld %lld", &n, &x);
    printf("%lld", power(n, x));
}