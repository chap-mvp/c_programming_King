#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

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
int evaluate_position();
bool has_zero();
double median();
int fact(int);
int factCondensed();
int gcdRecursive(int, int);

int main()
{
    printf("%d", gcdRecursive(21, 7));
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

/*--13.--*/
int evaluate_position()
{
    char board[8][8] = {{'K', 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 'P', 0, 'N', 'R', 0, 0},
                        {0, 0, 'Q', 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 'B', 0},
                        {0, 0, 'n', 0, 0, 'b', 0, 0},
                        {0, 0, 0, 'r', 0, 0, 0, 0},
                        {'k', 0, 0, 0, 0, 0, 'p', 0},
                        {1, 'q', 0, 0, 0, 0, 0, 0}};
    int points[64];

    for (int k = 0; k < 64; k++)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
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
                else if (board[i][j] == 'q')
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
                else
                {
                    points[k] = 0;
                }
                k++;
            }
        }
    }

    int sum;
    for (int i = 0; i < 64; i++)
    {
        printf("[%d] ", points[i]);
        sum += points[i];
        if (i != 0 && i % 8 == 0)
        {
            printf("\n");
        }
    }

    for (int i = 0; i < 64; i++)
    {
        sum += points[i];
    }

    sum -= 1;

    if (sum < 0)
    {
        printf("\nBlack wins!");
    }
    else if (sum > 0)
    {
        printf("\nWhite wins!");
    }
    else
    {
        printf("\nIts a draw!");
    }
}

/*--14.--*/
// bool has_zero(int a[], int n)   // array has no size!
// {
//     int i;
//     for (i = 0; i < n; i++)
//         if (a[i] == 0)
//             return true;
//         else
//             return false;
// }

bool has_zero()
{
    int a[] = {1, 2, 0, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    int i;
    for (i = 0; i < size; i++)
    {
        if (a[i] == 0)
        {
            printf("\n");
            return true;
        }
        printf("%d ", a[i]);
    }
    printf("\n");
    return false;
}

/*--15.--*/
double median()
{
    double x;
    double y;
    double z;

    printf("Enter your values (x y z): ");
    scanf("%lf %lf %lf", &x, &y, &z);

    double m;
    if ((y <= x && x <= z) || (y >= x && x >= z))
    {
        m = x;
    }
    else if ((x <= y && y <= z) || (x >= y && y >= z))
    {
        m = y;
    }
    else if ((y <= z && z <= x) || (y >= z && z >= x))
    {
        m = z;
    }
    printf("%lf", m);
}

/*--16.--*/
int fact(int n)
{
    return n <= 1 ? 1 : n * fact(n - 1);
}

/*--17.--*/
int factCondensed()
{
    int n = 5;
    int i = 1;

    for (int i = n; i >= 0; i--)
    {
        i *= n - 1;
        printf("%d ", i);
    }
    // printf("%d", n);
}

/*--18.--*/
int gcdRecursive(int m, int n)
{
    return n == 0 ? m : gcdRecursive(n, m % n);
}

/*--19.--*/
// 