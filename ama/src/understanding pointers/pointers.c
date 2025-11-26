#include <stdio.h>
#define N 10
int main(void)
{
    int i = 1;
    int *p = &i;
    *p = 2;

    printf("i has the value: %d", p);

}