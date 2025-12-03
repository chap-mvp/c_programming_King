#include <stdio.h>

/*--1.--*/
// (a), (g), (h)

/*--2.--*/
// (e), (f), (i)

/*--3.--*/
// void avg_sum(double a[], int n, double *avg, double *sum)
// {
//     int i;                       //
//     sum = 0.0;                   // *sum
//     for (i = 0; i < n; i++)      //
//         sum += a[i];             // *sum
//     avg = sum / n;               // *avg & *sum
// }

/*--4.--*/

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;

    printf("%d, %d", *p, *q);
}
void swapEnter()
{
    int i = 2, j = 3;
    swap(&i, &j);
}

/*--5.--*/
void split_time(long total_sec, int *hrs, int *min, int *sec)
{
    printf("Seconds since midnight: [%ld]\n", total_sec);
    printf("Current hour: \t\t[%d] [h]\n", *hrs);
    printf("Current mins: \t\t[%d] [m]\n", *min);
    printf("Current secs: \t\t[%d] [s]\n", *sec);
}

void calculateSecond()
{
    long total_sec;
    int hh, mm, ss;
    printf("Enter the current time: (hh:mm:ss): ");
    scanf("%d:%d:%d", &hh, &mm, &ss);
    total_sec = (hh * 60 * 60) + (mm * 60) + ss;
    split_time(total_sec, &hh, &mm, &ss);
}

/*--6.--*/

void find_two_largest(int n, int a[n], int *largest, int *second_largest)
{
    for (int i = 0; i < n; i++)
    {
        printf("[%d] ", a[i]);
    }
    printf("\n");

    int t = 0;
    int max = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[max] < a[i])
        {
            max = i;
        }
    }
    t = a[max];
    a[max] = a[n - 1];
    a[n - 1] = t;

    *largest = a[n - 1];

    for (int i = 0; i < n; i++)
    {
        printf("[%d] ", a[i]);
    }
    printf("\n");

    for (int i = 1; i < n - 1; i++)
    {
        if (a[max] < a[i])
        {
            max = i;
        }
    }
    t = a[max];
    a[max] = a[n - 2];
    a[n - 2] = t;

    *second_largest = a[n - 2];

    for (int i = 0; i < n; i++)
    {
        printf("[%d] ", a[i]);
    }
    printf("\n");
}

void arrayMaker()
{
    int n;
    printf("How large is your array? ");
    scanf("%d", &n);
    int a[n];
    printf("\n");
    printf("What are the values is your array? ");
    for (int i = 0; i < n; i++)
    {
        printf("%d. Value - ", i);
        scanf("%d", &a[i]);
    }

    int largest = 0;
    int second_largest = 0;
    find_two_largest(n, a, &largest, &second_largest);
    printf("\nLargest value: %d", largest);
    printf("\nSecond largest value: %d", second_largest);
}

/*--7.--*/
int days[2][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                   {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}};

void split_date(int day_of_year, int year, int *month, int *day)
{
    int m = 0;

    while (day_of_year > days[0][m])
    {
        day_of_year -= days[0][m];
        m++;
    }

    *month = m + 1;
    *day = day_of_year;
}

int split_date_starter()
{
    int day_of_year = 0, year, month, day;
    printf("Enter todays date: ");
    scanf("%d/%d/%d", &day, &month, &year);
    for (int i = 0; i < month - 1; i++)
    {
        day_of_year += days[0][i];
    }
    day_of_year += day;

    printf("Day of year: %d\n", day_of_year);

    int save_month, save_day;
    split_date(day_of_year, year, &save_month, &save_day);

    printf("Reconstucted: %d/%d/%d", save_day, save_month, year);
    return 0;
}

/*--8.--*/

/*
Write the following function:
int *find_largest(int a[], int n);
When passed an array a of length n, the function will return a pointer to the array’s largest
element.
*/
int *find_largest(int n, int a[])
{
    int * max = &a[0];
    for (int i = 0; i < n; i++)
    {
        if (*max < a[i])
        {
            max = &a[i];
            printf("%d\n", max);
        }
    }
    printf("%d", *max);
    return max;
}

int find_largest_request() {
    int a[] = {7, 5, 2, 1, 3, 8, 9, 4, 10, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int *p = find_largest(n, a);
    printf("\nPOINTER: %d", *p);
}

int main()
{
    
}