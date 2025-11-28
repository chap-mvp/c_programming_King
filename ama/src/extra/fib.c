
#include <stdio.h>

int main () {
    int fib[40] = {1, 1};
    for (int i = 2; i < 40; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d, ", fib[i - 2]);
    }
}