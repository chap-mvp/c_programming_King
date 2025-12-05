#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char alphabet[2][26] = {
    "abcdefghijklmnopqrstuvwxyz",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

/*--1./2./3.--*/
bool reverse_message(int n, char message[n])
{
    char reverse_message[n];
    int clean_message_counter;

    char *p = &alphabet[0][0];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (message[i] == *(p + j))
                clean_message_counter++;

    char clean_message[clean_message_counter];

    for (int i = 0; i < clean_message_counter; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < 26 * 2; k++)
                if (message[i] != *(p + k))
                    continue;
                else
                    clean_message[i] = message[j];

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
    int n = 10;
    char message[] = {"I am human"};
    int i = 0;

    // for (int i = 0; i < n; i++)
    //     while (getchar() != '\n')
    //         message[i] = getchar();
    //     i++;

    for (int i = 0; i < n; i++)
        printf("%c", message[i]);

    // reverse_message(n, message) ? printf("Its a palindrome!") : printf("Its not a palindrome!");
}

int main()
{
    reverse_message_caller();
}

/*--5.--*/
