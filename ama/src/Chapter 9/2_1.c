#include <stdio.h>

int selection_sort_starter();

int selection_sort(int n, int a[]);

int main()
{
    selection_sort_starter();
}

int selection_sort_starter()
{
    int n;

    printf("#.? ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("[%d.] ", i + 1);
        scanf("%d", &a[i]);
    }

    selection_sort(n, a);

    for (int i = 0; i < n; i++)
    {
        printf("[%d] ", a[i]);
    }
}

int selection_sort(int n, int a[])
{
    if (n <= 1)
    {
        return 0;
    }

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

    selection_sort(n - 1, a);
}