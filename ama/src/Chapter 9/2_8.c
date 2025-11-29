#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int roll()
{
    return (rand() % 6) + 1 + (rand() % 6) + 1;
}

int craps()
{
    char signal = 'y';
    int wins = 0;
    int loss = 0;

    while ((signal == 'y') || (signal == 'Y'))
    {
        printf("Would you like to start (y/n)? ");
        scanf(" %c", &signal);
        if ((signal != 'y') && (signal != 'Y'))
        {
            break;
        }

        int throw = roll();
        printf("You rolled %d! \n", throw);

        if (((throw == 7) || (throw == 11)))
        {
            wins++;
            continue;
        }
        else if (((throw == 2) || (throw == 3) || (throw == 12)))
        {
            loss++;
            continue;
        }

        while (1)
        {
            int newThrow = roll();
            printf("You rolled %d! \n", newThrow);

            if (newThrow == throw)
            {
                wins++;
                break;
            }
            if (newThrow == 7)
            {
                loss++;
                break;
            }
        }
    }

    printf("You have %d losses and %d wins!", loss, wins);
    return 0;
}

int main()
{
    srand(time(0));
    craps();
}