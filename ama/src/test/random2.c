#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void reverse_message_caller()
{
    printf("What string you like to check? - ");
    int n = 10;
    char message;
    int i = 0;

    message = getchar() != '\n';
    printf("%d", message);
}

int main()
{
    reverse_message_caller();
}