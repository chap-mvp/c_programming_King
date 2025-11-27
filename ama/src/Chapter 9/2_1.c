/*
Write a function gcd(m, n) that calculates the greatest common divisor of the integers m
and n. (Programming Project 2 in Chapter 6 describes Euclid’s algorithm for computing the
GCD.)

Hint: The classic algorithm for computing the GCD, known as Euclid’s algorithm, goes as
follows: Let m and n be variables containing the two numbers. If n is 0, then stop: m contains
the GCD. Otherwise, compute the remainder when m is divided by n. Copy n into m
and copy the remainder into n. Then repeat the process, starting with testing whether n is 0.

Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
denominator. Then divide both the numerator and denominator by the GCD.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int check();
int gcd();
int dayOfYear();
int numDigits();
int digit();
int largestElement();
int averageElement();
int positiveElement();
float compute_GPA();
double inner_product();

int evaluate_position()
{
    char board[8][8] = {{'K', 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 'P', 0, 'N', 'R', 0, 0},
                        {0, 0, 'Q', 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 'B', 0},
                        {0, 0, 'n', 0, 0, 'b', 0, 0},
                        {0, 0, 0, 'r', 0, 0, 0, 0},
                        {'k', 2, 0, 0, 0, 0, 'p', 0},
                        {1, 'q', 3, 0, 5, 0, 0, 0}};
    int points[64];

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 64; k++)
            {
                if (board[i][j] == 'K')
                {
                    points[k] = 11;
                }
                else if (board[i][j] == 'k')
                {
                    points[k] = -11;
                }
                else if (board[i][j] == 'Q')
                {
                    points[k] = 9;
                }
                else if (board[i][j] == '1')
                {
                    points[k] = -9;
                }
                else if (board[i][j] == 'R')
                {
                    points[k] = 5;
                }
                else if (board[i][j] == 'r')
                {
                    points[k] = -5;
                }
                else if (board[i][j] == 'B')
                {
                    points[k] = 3;
                }
                else if (board[i][j] == 'b')
                {
                    points[k] = -3;
                }
                else if (board[i][j] == 'N')
                {
                    points[k] = 3;
                }
                else if (board[i][j] == 'n')
                {
                    points[k] = -3;
                }
                else if (board[i][j] == 'P')
                {
                    points[k] = 1;
                }
                else if (board[i][j] == 'p')
                {
                    points[k] = -1;
                }
            }
        }
    }

    int sum;
    for (int k = 0; k < 64; k++)
    {
        printf("[%d] ", points[k]);
        sum += points[k];
    }

    if (sum < 0)
    {
        printf("Black wins!");
    }
    else if (sum > 0)
    {
        printf("White wins!");
    }
    else
    {
        printf("Its a draw!");
    }
}

int main()
{
    evaluate_position();
}

/*--2.--*/
int check()
{
    int x, y, n;
    printf("Enter the value for x, y and n: ");
    scanf("%d, %d, %d", &x, &y, &n);

    if (x >= 0 && y >= 0)
    {
        if (x <= n - 1 && x <= n - 1)
        {
            printf("1");
        }
    }
    else
    {
        printf("0");
    }
    return 0;
}

/*--3.--*/
int gcd()
{
    int m, n;
    printf("Enter 2 numbers for their GCD (a/b): ");
    scanf("%d/%d", &m, &n);
    while (n != 0)
    {
        int remainder = m % n;
        m = n;
        n = remainder;
    }
    printf("%d is the GCD", m);
    return m;
}

/*--4.--*/
int dayOfYear()
{
    int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int year;
    int dd, mm, yyyy;
    printf("Enter the date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (yyyy % 4 == 0)
    {
        day[1] = 29;
        int dayNr = 0;
        for (int i = mm; i >= 1; i--)
        {
            dayNr += day[i - 1];
            // printf("%d, %d ", day[i - 1], i);
        }
        dayNr += dd;
        // printf("%d", dayNr);
        printf("The date is the %d day!", dayNr);
    }
    else
    {
        int dayNr;
        for (int i = mm; i >= 1; i--)
        {
            dayNr += day[i - 1];
            // printf("%d, %d ", day[i - 1], i);
        }
        dayNr += dd;
        // printf("%d", dayNr);
        printf("The date is the %d day of the year!", dayNr);
    }
    return 0;
}

/*--5.--*/
int numDigits()
{
    int n;
    int i;
    printf("Enter the Number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        n /= 10;
        i++;
    }
    printf("%d digits!", i);
    return i;
}

/*--6.--*/
int digit()
{
    int n, k, newN;

    printf("Enter the number and the digit (n/k): ");
    scanf("%d/%d", &n, &k);

    int i = 0;
    newN = n;
    while (newN != 0)
    {

        newN /= 10;
        i++;
    }

    if (k > i)
    {
        printf("Wrong Input!!");
    }
    else
    {
        n = ((n %= (int)pow(10, k)) - (n %= (int)pow(10, k - 1))) / (int)pow(10, k - 1);
        printf("%d\n", n);
    }
}

/*--7.--*/
// All are legal, typecast, HOWEVER for c) the value WILL NOT BE CORRECT as double to int rounds down

/*--8.--*/
// a) and b) are valid prototypes

/*--9.--*/
// The values for i and j do NOT change as there is no return

/*--10.--*/
int largestElement()
{
    int n;
    printf("How many values does the Array have? ");
    scanf("%d", &n);

    int a[n];
    int max = a[0];

    for (int i = 0; i < n; i++)
    {
        printf("%d. element: ", i + 1);
        scanf("%d", &a[i]);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("[%d] ", a[i]);
    }

    printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("The largest value is: %d", max);
}

int averageElement()
{
    int sum = 0;
    int n;
    printf("How many values does the Array have? ");
    scanf("%d", &n);

    int a[n];
    int max = a[0];

    for (int i = 0; i < n; i++)
    {
        printf("%d. element: ", i + 1);
        scanf("%d", &a[i]);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("[%d] ", a[i]);
    }

    printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    printf("The average value is: %.1f", ((float)sum) / ((float)n));
}

int positiveElement()
{
    int n;
    printf("How many values does the Array have? ");
    scanf("%d", &n);

    int a[n];
    int max = a[0];

    for (int i = 0; i < n; i++)
    {
        printf("%d. element: ", i + 1);
        scanf("%d", &a[i]);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            printf("[%d] ", a[i]);
        }
    }
}

/*--11.--*/
float compute_GPA()
{
    int n;
    printf("How many grades did you get? ");
    scanf("%d", &n);
    char gradesAl[n];
    int gradesNum[n];

    for (int i = 0; i < n; i++)
    {
        printf("What are your grades? ");
        scanf(" %c", &gradesAl[i]);
        // printf("%c", gradesAl[i]);

        if ((gradesAl[i] == ('A')) || (gradesAl[i] == ('a')))
        {
            gradesNum[i] = 4;
            printf("4");
        }
        else if ((gradesAl[i] == ('B')) || (gradesAl[i] == ('b')))
        {
            gradesNum[i] = 3;
            printf("3");
        }
        else if ((gradesAl[i] == ('C')) || (gradesAl[i] == ('c')))
        {
            gradesNum[i] = 2;
            printf("2");
        }
        else if ((gradesAl[i] == ('D')) || (gradesAl[i] == ('d')))
        {
            gradesNum[i] = 1;
            printf("1");
        }
        else
        {
            gradesNum[i] = 0;
            printf("0");
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("[%d]", gradesNum[i]);
    }

    int sum;

    for (int i = 0; i < n; i++)
    {
        sum += gradesNum[i];
    }

    printf("The average is %.1f", (float)sum / n);
}

/*--12.--*/
double inner_product()
{

    int n;
    printf("How many numbers for the lists?");
    scanf("%d", &n);
    double a[n];
    double b[n];
    double c[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Numbers (a b): ");
        scanf("%lf %lf", &a[i], &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("[%lf]", a[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("[%lf]", b[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] * b[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("[%lf]", c[i]);
    }
}