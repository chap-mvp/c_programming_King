#include <stdio.h>
#include <stdlib.h>

char alphabetCaps[] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
    'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
    'U', 'V', 'W', 'X', 'Y', 'Z'};
char alphabetDown[] = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
    'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
    'u', 'v', 'w', 'x', 'y', 'z'};

int anagram()
{
    // Take the first Word
    char firstWord[10];
    int firstWordCounter[26] = {0};
    printf("Enter the first word: ");
    scanf("%s", &firstWord);

    // Take the second Word
    char secondWord[10];
    int secondWordCounter[26] = {0};
    printf("Enter the second word: ");
    scanf("%s", &secondWord);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (firstWord[i] == alphabetCaps[j] || firstWord[i] == alphabetDown[j])
            {
                firstWordCounter[j] += 1;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (secondWord[i] == alphabetCaps[j] || secondWord[i] == alphabetDown[j])
            {
                secondWordCounter[j] += 1;
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (firstWordCounter[i] != secondWordCounter[i])
        {
            printf("The words are NOT anagrams!");
            exit(0);
        }
    }
    printf("The words are anagrams!");
    exit(0);
}

int main()
{
    anagram();   
}