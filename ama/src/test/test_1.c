#include <stdio.h>
#include <string.h>
#define N 3

struct student
{
    int age;
    int height;
    int weight;
    int ID;
    char firstName[20];
    char lastName[20];
};

struct student stu[N];

void swap(int first, int second)
{
    struct student temp = stu[first];

    stu[first] = stu[second];
    stu[second] = temp;

    for (int i = 0; i < N; i++)
    {

        printf("Data for student - %s, %s", stu[i].lastName, stu[i].firstName);

        printf("\nAge: %d", stu[i].age);

        printf("\nHeight: %d", stu[i].height);

        printf("\nWeight: %d", stu[i].weight);

        printf("\nID: %d\n\n", stu[i].ID);
    }
}

void sort(char type)
{

    if (type == 'a')
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N - i - 1; j++)
            {
                if (stu[j].age > stu[j + 1].age)
                {
                    struct student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
    }
    if (type == 'h')
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N - i - 1; j++)
            {
                if (stu[j].age > stu[j + 1].age)
                {
                    struct student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
    }
    if (type == 'w')
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N - i - 1; j++)
            {
                if (stu[j].age > stu[j + 1].age)
                {
                    struct student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
    }
    if (type == 'i')
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N - i - 1; j++)
            {
                if (stu[j].age > stu[j + 1].age)
                {
                    struct student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
    }
}

int main()
{

    strcpy(stu[0].firstName, "John");
    strcpy(stu[0].lastName, "Dutton");

    strcpy(stu[1].firstName, "Average");
    strcpy(stu[1].lastName, "Joe");

    strcpy(stu[2].firstName, "Robert");
    strcpy(stu[2].lastName, "Jockey");

    for (int i = 0; i < N; i++)
    {

        printf("Data for student - %s, %s", stu[i].lastName, stu[i].firstName);

        stu[i].age = 10 + i;
        printf("\nAge: %d", stu[i].age);

        stu[i].height = stu[i].age * 10;
        printf("\nHeight: %d", stu[i].height);

        stu[i].weight = stu[i].height / 2;
        printf("\nWeight: %d", stu[i].weight);

        stu[i].ID = i;
        printf("\nID: %d\n\n", stu[i].ID);
    }

    int a, b;
    printf("Which student would you like to swap? ");
    scanf("%d", &a);
    printf("With which student? ");
    scanf("%d", &b);

    swap(a, b);

    char sorting;
    printf("What metric do you want to sort? \n'a' for AGE\n'h' for HEIGHT\n'i' for ID\n'w' for WEIGHT\nPlease enter - ");
    scanf("%c", &sorting);
    sort(sorting);
}