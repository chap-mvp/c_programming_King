#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
// int array_maker()
// {
//     printf("How long should your array be?");
//     int n = 0;
//     scanf("%d", &n);

//     printf("Enter the values of your array: ");
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("[%d.] - ", i + 1);
//         scanf("%d", &a[i]);
//     }
//     return a[n];
// }
/*--1.--*/
// (a) 14
// (b) 34
// (c) 4
// (d) true
// (e) false

/*--2.--*/
// *middle = (*low + *high) / 2;

/*--3.--*/
// {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}

/*--4.--*/
// Rewrite the make_empty, is_empty, and is_full functions of Section 10.2 to use the
// pointer variable top_ptr instead of the integer variable top.

#define STACK_SIZE 100

int contents[STACK_SIZE];
int *top_ptr = 0;

void make_empty(void)
{
    *top_ptr = 0;
}

bool is_empty(void)
{
    return *top_ptr == 0;
}

bool is_full(void)
{
    return *top_ptr == STACK_SIZE;
}

/*--5.--*/
// All illegal

/*--6.--*/
// int sum_array(const int a[], int n)
// {
//     int *p = a;
//     int sum = 0;
//     int i = 0;
//     for (i = 0; i < n; i++)
//     {
//         sum += *p + i;
//     }
//     return sum;
// }

// int sum_array_caller()
// {
//     int n = 5;
//     int a[] = {1, 2, 3, 4, 5};
//     sum_array(a, n);
// }

/*--7.--*/
bool search(const int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (*a + i == key)
        {
            return true;
        }
    }
    return false;
}
bool search_caller()
{
    const int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    int key = 0;
    return search(a, n, key) ? printf("Key is included") : printf("Key not here");
}

/*--8.--*/
void store_zeros(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (*a + i != 0)
        {
            *(a + i) = 0;
        }
    }
}

void store_zeros_caller()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    store_zeros(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("[%d] ", *(a + i));
    }
}

/*--9.--*/
double inner_product(const double *a, const double *b, int n)
{
    double c[n];
    for (int i = 0; i < n; i++)
    {
        c[i] = *(a + i) * *(b + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("[%.2f] ", *(c + i));
    }
}

double inner_product_caller()
{
    double a[] = {1, 2, 3, 4, 5};
    double b[] = {1, 2, 3, 4, 5};
    int n = 5;
    inner_product(a, b, n);
}

/*--10.--*/
// Modify the find_middle function of Section 11.5 so that it uses pointer arithmetic to
// calculate the return value.
int *find_middle(int a[], int n)
{
    int sum;
    if (n % 2 == 0)
    {
        return &a[n / 2];
    }
    else
    {
        return &a[(n - 1 / 2) + 1];
    }
}

int find_middle_caller()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    return *find_middle(a, n);
}

/*--11.--*/

int find_largest(int a[], int n)
{
    int i, max;
    max = a[0];
    for (i = 1; i < n; i++)
        if (*a + i > max)
            max = *a + i;
    return max;
}

int find_largest_caller()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    return find_largest(a, n);
}

/*--12.--*/
void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    int *temp;
    int element = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(a + i) > *largest)
        {
            element = i;
            *largest = *(a + i);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i != element && (*(a + i) > *largest))
        {
            *second_largest = *(a + i);
        }
    }
}

void find_two_largest_caller()
{
    int a[] = {5, 4, 3, 2, 1};
    // int a[] = {1, 2, 4, 5, 6};

    int n = 5;
    int largest = 0;
    int second_largest = 0;
    find_two_largest(a, n, &largest, &second_largest);
    printf("%d, %d", a[0], second_largest, largest);
}

/*--13.--*/

/*--14.--*/
bool temperature(int c, int r, int a[r][c], int key)
{
    int *p = &a[0][0];
    for (int i = 0; i < r * c; i++)
    {
        if (*p + i == key)
        {
            return true;
        }
    }
    return false;
}

int genRandNum()
{
    int randGen = -15 + rand() % (35 - -15 + 1);
    return randGen;
}

bool temperature_caller()
{
    srand(time(0));

    int c = 24;
    int r = 7;
    int a[r][c];
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            a[i][j] = genRandNum();
        }
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            printf("[%d] ", a[i][j]);
        }
        printf("\n");
    }

    int key;
    printf("What Temp would you like to check? ");
    scanf("%d", &key);
    return temperature(c, r, a, key) ? printf("Key is included") : printf("Key not here");
}

/*--15.--*/

/*--16.--*/

/*--17.--*/
int sum_two_dimensional_array(int n, const int a[][n])
{
    int *p = &a[0][0];
    int sum = 0;
    for (int i = 0; i < 2 * n; i++)
        sum += *(p + i);
    return sum;
}

int sum_two_dimensional_array_caller()
{
    int n = 9;
    int a[][9] = {{1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9}};
    printf("%d", sum_two_dimensional_array(n, a));
}

/*--18.--*/
int evaluate_position()
{
    char board[8][8] = {{'K', '0', '0', '0', '0', '0', '0', '0'},
                        {'0', '0', 'P', '0', 'N', 'R', '0', '0'},
                        {'0', '0', 'Q', '0', '0', '0', '0', '0'},
                        {'0', '0', '0', '0', '0', '0', 'B', '0'},
                        {'0', '0', 'n', '0', '0', 'b', '0', '0'},
                        {'0', '0', '0', 'r', '0', '0', '0', '0'},
                        {'k', '0', '0', '0', '0', '0', 'p', '0'},
                        {'0', 'q', '0', '0', '0', '0', '0', '0'}};
    int points[64];
    int sum = 0;
    char *p = &board[0][0];

    for (int k = 0; k < 64; k++)
    {
        if (*(p + k) == 'K')
            points[k] = 11;

        if (*(p + k) == 'k')
            points[k] = -11;

        if (*(p + k) == 'Q')
            points[k] = 9;

        if (*(p + k) == 'q')
            points[k] = -9;

        if (*(p + k) == 'R')
            points[k] = 5;

        if (*(p + k) == 'r')
            points[k] = -5;

        if (*(p + k) == 'B')
            points[k] = 3;

        if (*(p + k) == 'b')
            points[k] = -3;

        if (*(p + k) == 'N')
            points[k] = 3;

        if (*(p + k) == 'n')
            points[k] = -3;

        if (*(p + k) == 'P')
            points[k] = 1;

        if (*(p + k) == 'p')
            points[k] = -1;

        if (*(p + k) == '0')
            points[k] = 0;

        sum += points[k];
    }

    (sum == 0) ? printf("\nIts a draw!") : 
    (sum < 0)  ? printf("\nBlack wins!") : printf("\nWhite wins!");
}

int main()
{
    evaluate_position();
}