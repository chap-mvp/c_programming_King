#include <stdio.h>

int selection_sort(int n, int a[])
{

    for (int i = 0; i < n; i++)
    {
        printf("[%d] ", a[i]);
    }

    printf("\n");

    int temp = 0;
    int max = a[0];

    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            printf("%d vs %d\n", max, a[n - 1]);
            max = a[i];
            a[i] = a[n-1];
            a[n-1] = max;
            printf("%d and %d swapped!\n", a[i], a[n-1]);

        }
        selection_sort(n -= 1, a);
    }



    for (int i = 0; i < n; i++)
    {
        printf("[%d] ", a[i]);
    }

    printf("\n");
}

int main()
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