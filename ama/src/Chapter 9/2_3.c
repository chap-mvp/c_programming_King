#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int square = 11;

int widthArray = 11;
int heightArray = 11;

char a[11][11];

char alphabet[] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
    'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
    'U', 'V', 'W', 'X', 'Y', 'Z'};

void generate_random_walk(char a[11][11])
{
    for (int i = 0; i < square; i++)
    {
        for (int j = 0; j < square; j++)
        {
            a[i][j] = '.';
        }
    }

    int y = 5;
    int x = 5;
    a[y][x] = 'A';

    srand(time(0));

    for (int i = 1; i < 26; i++)
    {
        int moveUp = (y - 1 < 0)                || (a[y - 1][x] != '.');
        int moveDown = (y + 1 >= heightArray)   || (a[y + 1][x] != '.');
        int moveLeft = (x - 1 < 0)              || (a[y][x - 1] != '.');
        int moveRight = (x + 1 >= widthArray)   || (a[y][x + 1] != '.');

        if (moveUp && moveDown && moveLeft && moveRight)
            break;

        int moved = 0;

        while (!moved)
        {
            int randomDirection = (rand() % 4) + 1;
            if (randomDirection == 1 && !moveUp)
            {
                y -= 1;
                a[y][x] = alphabet[i];
                moved = 1;
            }
            else if (randomDirection == 2 && !moveDown)
            {
                y += 1;
                a[y][x] = alphabet[i];
                moved = 1;
            }
            else if (randomDirection == 3 && !moveLeft)
            {
                x -= 1;
                a[y][x] = alphabet[i];
                moved = 1;
            }
            else if (randomDirection == 4 && !moveRight)
            {
                x += 1;
                a[y][x] = alphabet[i];
                moved = 1;
            }
        }
    }
}

void print_array(char a[11][11])
{
    for (int i = 0; i < square; i++)
    {
        for (int j = 0; j < square; j++)
            printf("[%c]", a[i][j]);
        printf("\n");
    }
}

int main()
{
    generate_random_walk(a);
    print_array(a);
}