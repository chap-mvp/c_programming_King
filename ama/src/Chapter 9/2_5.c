#include <stdio.h>

int magic_square()
{
    int n;

    printf("What size Magic Square would you like? - ");
    scanf("%d", &n);
    int magicSquare[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            magicSquare[i][j] = 0;
        }
    }

    int y;
    int x;
    printf("Where should it start (1x2)? - ");
    scanf("%dx%d", &y, &x);
    magicSquare[y][x] = 1;

    for (int i = 2; i < (n * n) + 1; i++)
    {

        int ny = y - 1;
        int nx = x + 1;

        if (ny < 0)
        {
            ny = n - 1;
        }
        if (nx >= n)
        {
            nx = 0;
        }

        if (magicSquare[ny][nx] == 0)
        {
            y = ny;
            x = nx;
        }
        else
        {
            y += 1;
            if (y >= n)
            {
                y = 0;
            }
        }
        magicSquare[y][x] = i;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("[%d]\t", magicSquare[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    magic_square();
}