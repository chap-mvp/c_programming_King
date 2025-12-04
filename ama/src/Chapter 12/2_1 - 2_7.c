#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char alphabet[2][26] = {};

/*--1./2./3.--*/
bool reverse_message(int n, char message[n])
{
    char reverse_message[n];
    char clean_message[n];

    char *p = alphabet[0][0];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (message[i] == *(p + j))
                clean_message[i] = message[i];

    for (int i = 0; i < n; i++)
        if (message[i] != message[n - i])
            return false;

    for (int i = 0; i < n; i++)
        reverse_message[i] = clean_message[n - i];

    return true;
}

void reverse_message_caller()
{
    printf("What string you like to check? - ");
    int n = 100;
    char message[n];
    int i = 0;
    while (getchar() != '\n')
    {
        message[i] = getchar();
        i++;
    }

    for (i; i > 0; i--) 
        printf("%c ", message[i]);    
}

int main()
{
    reverse_message_caller();
    printf("HEHEHEHEHE");
}

/*--5.--*/
